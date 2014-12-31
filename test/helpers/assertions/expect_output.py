import pexpect
from nose.tools import assert_equals

def expect_output(child, output):
    index = child.expect([output, pexpect.EOF, pexpect.TIMEOUT], timeout=1)
    assert_equals(index,0, 
        "unexpected output encountered while waiting for %s" % output)


