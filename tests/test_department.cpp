#include "doctest.h"
#include "../src/department.h"
#include "../src/employee.h"
#include <sstream>
#include <iostream>
#include <memory>

/**
 * Derived class from Employee for testing purposes.
 */
class TestEmployee : public Employee {
public:
  TestEmployee(int id, const std::string& name, double salary)
    : Employee(id, name, salary) {}

  void ping() const override {}
};

/**
 * Test case for Department class.
 */
TEST_CASE("Department class") {
  Department department("Engineering");

  SUBCASE("addEmployee and getEmployeeList") {
    auto emp1 = std::make_unique<TestEmployee>(1, "Alice", 50000.0);
    auto emp2 = std::make_unique<TestEmployee>(2, "Bob", 60000.0);
    department.addEmployee(std::move(emp1));
    department.addEmployee(std::move(emp2));
    auto employees = department.getEmployeeList();
    CHECK(employees.size() == 2);
    CHECK(employees[0]->getName() == "Alice");
    CHECK(employees[1]->getName() == "Bob");
  }

  SUBCASE("removeEmployee") {
    auto emp1 = std::make_unique<TestEmployee>(1, "Alice", 50000.0);
    auto emp2 = std::make_unique<TestEmployee>(2, "Bob", 60000.0);
    department.addEmployee(std::move(emp1));
    department.addEmployee(std::move(emp2));
    department.removeEmployee(1);
    auto employees = department.getEmployeeList();
    CHECK(employees.size() == 1);
    CHECK(employees[0]->getName() == "Bob");
  }

  SUBCASE("getDepartmentDetails") {
    auto emp1 = std::make_unique<TestEmployee>(1, "Alice", 50000.0);
    department.addEmployee(std::move(emp1));
    std::string details = department.getDepartmentDetails();
    CHECK(details.find("Department: Engineering") != std::string::npos);
    CHECK(details.find("Alice") != std::string::npos);
  }

  SUBCASE("getDepartmentName") {
    CHECK(department.getDepartmentName() == "Engineering");
  }

  SUBCASE("listEmployees") {
    auto emp1 = std::make_unique<TestEmployee>(1, "Alice", 50000.0);
    department.addEmployee(std::move(emp1));
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    department.listEmployees();
    std::cout.rdbuf(old);
    std::string output = buffer.str();
    CHECK(output.find("Alice") != std::string::npos);
  }
}
