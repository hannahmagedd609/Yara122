# Locate GTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set test source files
set(TEST_SOURCES
    test/test_game.cpp
    test/test_ai.cpp
    # Add more test files as needed
)

# Create test executable
add_executable(tests ${TEST_SOURCES})

# Link with Google Test libraries
target_link_libraries(tests ${GTEST_LIBRARIES} pthread)

# Optional: Link with your project's libraries
target_link_libraries(tests ${PROJECT_NAME})

# Register tests with CTest
include(GoogleTest)
gtest_discover_tests(tests)
