
#include "doctest.h"
#include "../src/employee.h"
#include "../src/manager.h"
#include <stdexcept>

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

  SUBCASE("setSalary and getSalary") {
    manager.setSalary(85000.0);
    CHECK(manager.getSalary() == 85000.0);

    CHECK_THROWS_AS(manager.setSalary(-1000.0), std::invalid_argument);
  }

  SUBCASE("getName") {
    CHECK(manager.getName() == "Alice");
  }

  SUBCASE("getId") {
    CHECK(manager.getId() == 1);
  }
}