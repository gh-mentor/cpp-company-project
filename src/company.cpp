#include "company.h"
#include "department.h"
#include "employee.h"
#include "project.h"
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
void Company::addDepartment(Department department) {
  m_departmentList.push_back(std::move(department));
}

/**
 * Removes a department from the company.
 * @param departmentName The name of the department to remove.
 * @throws std::runtime_error if the department cannot be found.
 */
void Company::removeDepartment(const std::string& departmentName) {
  auto it = std::remove_if(m_departmentList.begin(), m_departmentList.end(),
    [&departmentName](const Department& department) {
      return department.getDepartmentName() == departmentName;
    });
  if (it == m_departmentList.end()) {
    throw std::runtime_error("Department not found");
  }
  m_departmentList.erase(it, m_departmentList.end());
}

/**
 * Lists all employees in the company.
 * @return A vector of pointers to all employees.
 */
std::vector<Employee*> Company::listEmployees() const {
  std::vector<Employee*> allEmployees;
  for (const auto& department : m_departmentList) {
    for (const auto& employee : department.getEmployeeList()) {
      allEmployees.push_back(employee);
    }
  }
  return allEmployees;
}