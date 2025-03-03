#include "doctest.h"
#include "../src/company.h"
#include "../src/department.h"
#include "../src/employee.h"
#include <vector>
#include <string>
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
 * @brief Test case for Company::listEmployees
 */
TEST_CASE("Testing Company::listEmployees") {
  Company company;

  // Create employees
  auto emp1 = std::make_unique<TestEmployee>(1, "John Doe", 50000.0);
  auto emp2 = std::make_unique<TestEmployee>(2, "Jane Smith", 60000.0);

  // Create departments and add employees
  Department dept1("HR");
  dept1.addEmployee(std::move(emp1));
  Department dept2("Engineering");
  dept2.addEmployee(std::move(emp2));

  // Add departments to company
  company.addDepartment(std::move(dept1));
  company.addDepartment(std::move(dept2));

  // List employees
  auto employees = company.listEmployees();

  // Check the number of employees
  CHECK(employees.size() == 2);

  // Check the details of the employees
  CHECK(employees[0]->getName() == "John Doe");
  CHECK(employees[0]->getId() == 1);
  CHECK(employees[1]->getName() == "Jane Smith");
  CHECK(employees[1]->getId() == 2);
}