#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include "department.h"
#include "employee.h"

class Company {
private:
  std::vector<Department> departmentList;
  std::vector<Employee> employeeList;

public:
  Company();
  void addDepartment(const Department& department);
  void removeDepartment(const std::string& departmentName);
  std::vector<Employee> listEmployees() const;
};

#endif // COMPANY_H