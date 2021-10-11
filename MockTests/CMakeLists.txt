include(${PROJECT_SOURCE_DIR}/GTest.cmake)

include_directories(${PROJECT_SOURCE_DIR}/Helpers)
package_add_test_with_libraries(MockTest MockTests.cpp)
