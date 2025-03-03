#include "doctest.h"
#include "../src/department.h"
#include "../src/employee.h"
#include <sstream>
#include <iostream>

/**
 * Test case for Department class.
 */
TEST_CASE("Department class") {
  Department department("Engineering");

  SUBCASE("addEmployee and getEmployeeList") {
    Employee emp1(1, "Alice", 50000.0);
    Employee emp2(2, "Bob", 60000.0);
    department.addEmployee(emp1);
    department.addEmployee(emp2);
    auto employees = department.getEmployeeList();
    CHECK(employees.size() == 2);
    CHECK(employees[0].getName() == "Alice");
    CHECK(employees[1].getName() == "Bob");
  }

  SUBCASE("removeEmployee") {
    Employee emp1(1, "Alice", 50000.0);
    Employee emp2(2, "Bob", 60000.0);
    department.addEmployee(emp1);
    department.addEmployee(emp2);
    department.removeEmployee(1);
    auto employees = department.getEmployeeList();
    CHECK(employees.size() == 1);
    CHECK(employees[0].getName() == "Bob");
  }

  SUBCASE("getDepartmentDetails") {
    Employee emp1(1, "Alice", 50000.0);
    department.addEmployee(emp1);
    std::string details = department.getDepartmentDetails();
    CHECK(details.find("Department: Engineering") != std::string::npos);
    CHECK(details.find("Alice") != std::string::npos);
  }

  SUBCASE("getDepartmentName") {
    CHECK(department.getDepartmentName() == "Engineering");
  }

  SUBCASE("listEmployees") {
    Employee emp1(1, "Alice", 50000.0);
    department.addEmployee(emp1);
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    department.listEmployees();
    std::cout.rdbuf(old);
    std::string output = buffer.str();
    CHECK(output.find("Alice") != std::string::npos);
  }
}
