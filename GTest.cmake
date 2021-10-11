macro(package_add_test_with_libraries TESTNAME FILES)
    add_executable(${TESTNAME} ${FILES})
    target_link_libraries(${TESTNAME} gtest gmock gtest_main)
    gtest_discover_tests(${TESTNAME}
            WORKING_DIRECTORY ${PROJECT_DIR}
            PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_DIR}"
            )
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
endmacro()
