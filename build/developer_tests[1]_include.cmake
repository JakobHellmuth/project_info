if(EXISTS "/workspaces/project_info/build/developer_tests[1]_tests.cmake")
  include("/workspaces/project_info/build/developer_tests[1]_tests.cmake")
else()
  add_test(developer_tests_NOT_BUILT developer_tests_NOT_BUILT)
endif()