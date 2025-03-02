#include "company.h"
#include "department.h"
#include "employee.h"
#include <vector>
#include <string>
#include <iostream>

Company::Company() {}

void Company::addDepartment(const Department& department) {
  departmentList.push_back(department);
}

void Company::removeDepartment(const std::string& departmentName) {
  departmentList.erase(std::remove_if(departmentList.begin(), departmentList.end(),
    [&departmentName](const Department& dept) {
      return dept.getDepartmentName() == departmentName;
    }), departmentList.end());
}

std::vector<Employee> Company::listEmployees() const {
  std::vector<Employee> allEmployees;
  for (const auto& department : departmentList) {
    for (const auto& employee : department.getEmployeeList()) {
      allEmployees.push_back(employee);
    }
  }
  return allEmployees;
}