//Locate GTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

//Set test source files
set(TEST_SOURCES
    test_game.cpp
    test_ai.cpp
    //Add more test files as needed
)

//Create test executable
add_executable(run_tests ${TEST_SOURCES})

//Link with Google Test libraries
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)

//Register tests with CTest
include(GoogleTest)
gtest_discover_tests(run_tests)

