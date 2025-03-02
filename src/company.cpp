#include "company.h"
#include "department.h"
#include "employee.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream> // Required for std::stringstream

Company::Company() {}

/**
 * Adds a new department to the company.
 * @param department The department to add.
 */
void Company::addDepartment(const Department& department) {
  departmentList.push_back(department);
}

/**
 * Removes a department from the company.
 * @param departmentName The name of the department to remove.
 * @throws std::runtime_error if the department cannot be found.
 */
void Company::removeDepartment(const std::string& departmentName) {
  auto it = std::remove_if(departmentList.begin(), departmentList.end(),
    [&departmentName](const Department& dept) {
      return dept.getDepartmentName() == departmentName;
    });

  if (it == departmentList.end()) {
    std::stringstream ss;
    ss << "Department not found: " << departmentName;
    throw std::runtime_error(ss.str());
  }

  departmentList.erase(it, departmentList.end());
}

/**
 * Lists all employees in the company.
 * @return A vector of all employees.
 */
std::vector<Employee> Company::listEmployees() const {
  std::vector<Employee> allEmployees;
  for (const auto& department : departmentList) {
    for (const auto& employee : department.getEmployeeList()) {
      allEmployees.push_back(employee);
    }
  }
  return allEmployees;
}