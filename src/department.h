#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"
#include <vector>
#include <string>
#include <memory>

/**
 * Represents a department in the company.
 */
class Department {
private:
  std::string m_departmentName;
  std::vector<std::unique_ptr<Employee>> m_employeeList;

public:
  Department(const std::string& name);

  // Delete copy constructor and copy assignment operator
  Department(const Department&) = delete;
  Department& operator=(const Department&) = delete;

  // Default move constructor and move assignment operator
  Department(Department&&) = default;
  Department& operator=(Department&&) = default;

  void addEmployee(std::unique_ptr<Employee> employee);
  void removeEmployee(int employeeId);
  std::string getDepartmentDetails() const;
  std::string getDepartmentName() const;
  void listEmployees() const;
  std::vector<Employee*> getEmployeeList() const;
};

#endif // DEPARTMENT_H