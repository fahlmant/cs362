# $Id: MyDD.py,v 1.1 2001/11/05 19:53:33 zeller Exp $
# Template for adapting delta debugging.  Areas to customize are
# tagged with `FIXME'.

import DD
import commands
import string

class MyDD(DD.DD):
    def __init__(self):
        DD.DD.__init__(self)
        
    def _test(self, deltas):
        # returns either self.PASS, self.FAIL, or self.UNRESOLVED.
    # Build input
        input = ""
        for (index, character) in deltas:
            input = input + character

        # Write input to `input.c'
        out = open('input.c', 'w')
        out.write(input)
        out.close()

        print self.coerce(deltas)

        # Invoke GCC
        (status, output) = commands.getstatusoutput(
            "(ulimit -H -s 256; gcc -c -O input.c) 2>&1")

        print output
        print "Exit code", status

        # Determine outcome
        if status == 0:
            return self.PASS
        elif string.find(output, "fatal signal 11") >= 0:
            return self.FAIL
        return self.UNRESOLVED

    def coerce(self, deltas):
        # Pretty-print the configuration
        input = ""
        for (index, character) in deltas:
            input = input + character
        return input

if __name__ == '__main__':
    deltas = []
    index = 1
    
    for character in open('testdominion.c').read():
        deltas.append((index, character))
        index = index + 1

    mydd = MyDD()
    
    #print "Simplifying failure-inducing input..."
    #c = mydd.ddmin(deltas)              # Invoke DDMIN
    #print "The 1-minimal failure-inducing input is", c
    #print "Removing any element will make the failure go away."
    #print
    
    print "Isolating the failure-inducing difference..."
    (c, c1, c2) = mydd.dd(deltas)	# Invoke DD
    print "The 1-minimal failure-inducing difference is", c
    print c1, "passes,", c2, "fails"


# Local Variables:
# mode: python
# End:
