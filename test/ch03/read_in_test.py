import pexpect
from ..helpers.assertions.expect_output import expect_output

def test_read_in():
    child = pexpect.spawnu('./read-in')
    expect_output(child, '.*?a bool: ')
    input_bool_string = 'false'
    child.sendline(input_bool_string)
    expect_output(child, '.*?a char: ')
    input_char_string = 'c'
    child.sendline(input_char_string)
    expect_output(child, '.*?an int: ')
    input_int_string = '37'
    child.sendline(input_int_string)
    expect_output(child, '.*?a double: ')
    input_double_string = '13.37'
    child.sendline(input_double_string)
    expect_output(child, '.*?a string: ')
    input_string = 'xxx'
    child.sendline(input_string)
    expect_output(child, '.*?answers were:')
    expect_output(child, input_bool_string)
    expect_output(child, input_char_string)
    expect_output(child, input_int_string)
    expect_output(child, input_double_string)
    expect_output(child, input_string)

