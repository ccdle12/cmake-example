# Use the gtest folder path, this is specific to OSX.
add_subdirectory(/gtest
                 ${PROJECT_BINARY_DIR}/gtest)

# Enable use of CTest.
include(CTest)

# Set the variable for the test binary.
set(TEST_BINARY ${PROJECT_NAME}_test)

# Include the test file "test_blah.cpp" as an executable.
add_executable(${TEST_BINARY}
                test_blah.cpp)

# Link the blah library to the test binary.
target_link_libraries(${TEST_BINARY}
                      blah
                      gtest gtest_main
)

# Add the tests. 
add_test(
    NAME ${TEST_BINARY}
    COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_BINARY}
)
