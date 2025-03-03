#include "doctest.h"
#include "../src/employee.h"
#include <stdexcept>

/**
 * Test case for Employee class.
 */
TEST_CASE("Employee class") {
  Employee employee(1, "Alice", 50000.0);

  SUBCASE("getDetails") {
    CHECK(employee.getDetails() == "ID: 1, Name: Alice, Salary: 50000");
  }

  SUBCASE("setSalary and getSalary") {
    employee.setSalary(60000.0);
    CHECK(employee.getSalary() == 60000.0);

    CHECK_THROWS_AS(employee.setSalary(-1000.0), std::invalid_argument);
  }

  SUBCASE("getName") {
    CHECK(employee.getName() == "Alice");
  }

  SUBCASE("getId") {
    CHECK(employee.getId() == 1);
  }
}