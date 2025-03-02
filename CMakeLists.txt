cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(CompanyProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
  src/employee.cpp
  src/manager.cpp
  src/developer.cpp
  src/department.cpp
  src/company.cpp
)

# Add the header files
set(HEADERS
  src/employee.h
  src/manager.h
  src/developer.h
  src/department.h
  src/company.h
)

# Add the executable
add_executable(CompanyProject ${SOURCES} ${HEADERS})

# Include directories
target_include_directories(CompanyProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Add the test source files
set(TEST_SOURCES
  tests/test_company.cpp
)

# Add the test executable
add_executable(CompanyProjectTests ${TEST_SOURCES} ${SOURCES} ${HEADERS})

# Include directories for tests
target_include_directories(CompanyProjectTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/tests)

# Enable testing
enable_testing()

# Add a test using the test executable
add_test(NAME CompanyProjectTests COMMAND CompanyProjectTests)

# Link libraries if any (e.g., pthread)
# target_link_libraries(CompanyProject PRIVATE pthread)
