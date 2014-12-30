function(add_pexpect_test target testfile) 
  add_test(NAME "${target}PexpectTest" 
    COMMAND nosetests ${testfile})
endfunction()
