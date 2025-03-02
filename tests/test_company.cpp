#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/company.h"
#include "../src/department.h"
#include "../src/employee.h"
#include <vector>
#include <string>

/**
 * @brief Test case for Company::listEmployees
 */
TEST_CASE("Testing Company::listEmployees") {
  Company company;

  // Create employees
  const Employee emp1(1, "John Doe", 50000.0);
  const Employee emp2(2, "Jane Smith", 60000.0);

  // Create departments and add employees
  Department dept1("HR");
  dept1.addEmployee(emp1);
  Department dept2("Engineering");
  dept2.addEmployee(emp2);

  // Add departments to company
  company.addDepartment(dept1);
  company.addDepartment(dept2);

  // List employees
  auto employees = company.listEmployees();

  // Check the number of employees
  CHECK(employees.size() == 2);

  // Check the details of the employees
  CHECK(employees[0].getName() == "John Doe");
  CHECK(employees[0].getId() == 1);
  CHECK(employees[1].getName() == "Jane Smith");
  CHECK(employees[1].getId() == 2);
}