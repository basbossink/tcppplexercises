import pexpect
from ..helpers.assertions.expect_output import expect_output

def test_read_in():
    child = pexpect.spawnu('./hello1')
    expect_output(child, '.*?name: ')
    supplied_name = 'Fred Flinstone'
    child.sendline(supplied_name)
    expect_output(child, '.*?age: ')
    supplied_age = '37'
    child.sendline(supplied_age)
    expect_output(child, 'Hello %s.*? age %s' % (supplied_name, supplied_age))

