#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include <vector>
#include "employee.h"

class Department {
private:
  std::string departmentName;
  std::vector<Employee> employeeList;

public:
  Department(const std::string& name);
  void addEmployee(const Employee& employee);
  void removeEmployee(int employeeId);
  std::string getDepartmentDetails() const;
  std::string getDepartmentName() const;
  void listEmployees() const;
  std::vector<Employee> getEmployeeList() const; // Added prototype
};

#endif // DEPARTMENT_H