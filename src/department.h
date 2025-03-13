#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "employee.h"
#include "project.h"
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
  std::vector<std::shared_ptr<Project>> m_projectList;

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

  /**
   * @brief Adds a project to the department.
   * @param project The project to add.
   */
  void addProject(std::shared_ptr<Project> project);

  /**
   * @brief Removes a project from the department.
   * @param projectId The ID of the project to remove.
   */
  void removeProject(int projectId);

  /**
   * @brief Gets the list of projects in the department.
   * @return A vector of pointers to projects.
   */
  std::vector<std::shared_ptr<Project>> getProjectList() const;
};

#endif // DEPARTMENT_H