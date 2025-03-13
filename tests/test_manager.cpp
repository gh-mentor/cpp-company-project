#include "doctest.h"
#include "../src/employee.h"
#include "../src/manager.h"
#include <iostream>
#include <sstream>

/**
 * Test case for Manager class.
 */
TEST_CASE("Manager class") {
  Manager manager(1, "Alice", 75000.0, "Engineering");

  SUBCASE("getDetails") {
    CHECK(manager.getDetails() == "ID: 1, Name: Alice, Salary: 75000, Department: Engineering");
  }

  SUBCASE("getDepartment") {
    CHECK(manager.getDepartment() == "Engineering");
  }

  SUBCASE("ping") {
    // Redirect std::cout to a stringstream to capture the output
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    manager.ping();
    std::cout.rdbuf(old);
    CHECK(buffer.str() == "Manager Alice is active.\n");
  }
}