#include "department.h"
#include <iostream>
#include <vector>
#include <algorithm>

Department::Department(const std::string& name) : departmentName(name) {}

void Department::addEmployee(const Employee& employee) {
  employeeList.push_back(employee);
}

void Department::removeEmployee(int employeeId) {
  employeeList.erase(std::remove_if(employeeList.begin(), employeeList.end(),
    [employeeId](const Employee& emp) { return emp.getId() == employeeId; }), employeeList.end());
}

std::string Department::getDepartmentDetails() const {
  std::string details = "Department: " + departmentName + "\nEmployees:\n";
  for (const auto& emp : employeeList) {
    details += emp.getDetails() + "\n";
  }
  return details;
}

std::string Department::getDepartmentName() const {
  return departmentName;
}

void Department::listEmployees() const {
  for (const auto& emp : employeeList) {
    std::cout << emp.getDetails() << std::endl;
  }
}

std::vector<Employee> Department::getEmployeeList() const {
  return employeeList;
}