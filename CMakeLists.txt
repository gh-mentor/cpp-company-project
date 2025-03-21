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
  src/department.cpp
  src/company.cpp
)

# Add the header files
set(HEADERS
  src/employee.h
  src/manager.h
  src/department.h
  src/company.h
)

# Create a library
add_library(CompanyProject STATIC ${SOURCES} ${HEADERS})

# Include directories
target_include_directories(CompanyProject PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Add the test source files
set(TEST_SOURCES
  tests/main.cpp
  tests/test_company.cpp
  tests/test_department.cpp
  tests/test_employee.cpp
)

# Add the test executable
add_executable(CompanyProjectTests ${TEST_SOURCES})

# Link the library to the test executable
target_link_libraries(CompanyProjectTests PRIVATE CompanyProject)

# Include directories for tests
target_include_directories(CompanyProjectTests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src ${CMAKE_CURRENT_SOURCE_DIR}/tests)

# Enable testing
enable_testing()

# Add a test using the test executable
add_test(NAME CompanyProjectTests COMMAND CompanyProjectTests)

# Link libraries if any (e.g., pthread)
# target_link_libraries(CompanyProject PRIVATE pthread)
