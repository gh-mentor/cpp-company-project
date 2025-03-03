#ifndef COMPANY_H
#define COMPANY_H

#include <string>
#include <vector>
#include <memory>
#include "department.h"
#include "employee.h"

class Company {
private:
  std::vector<Department> m_departmentList;
  std::vector<std::unique_ptr<Employee>> m_employeeList;

public:
  Company();
  void addDepartment(Department department);
  void removeDepartment(const std::string& departmentName);
  std::vector<Employee*> listEmployees() const;
};

#endif // COMPANY_H