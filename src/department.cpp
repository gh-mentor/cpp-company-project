#include "department.h"
#include "project.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <sstream>

Department::Department(const std::string& name) : m_departmentName(name) {}

/**
 * Adds an employee to the department.
 * @param employee The employee to add.
 */
void Department::addEmployee(std::unique_ptr<Employee> employee) {
  m_employeeList.push_back(std::move(employee));
}

/**
 * Removes an employee from the department.
 * @param employeeId The ID of the employee to remove.
 */
void Department::removeEmployee(int employeeId) {
  m_employeeList.erase(std::remove_if(m_employeeList.begin(), m_employeeList.end(),
    [employeeId](const std::unique_ptr<Employee>& emp) { return emp->getId() == employeeId; }), m_employeeList.end());
}

/**
 * Gets the details of the department.
 * @return A string containing the details of the department.
 */
std::string Department::getDepartmentDetails() const {
  std::stringstream details;
  details << "Department: " << m_departmentName << "\nEmployees:\n";
  for (const auto& emp : m_employeeList) {
    details << emp->getDetails() << "\n";
  }
  return details.str();
}

/**
 * Gets the name of the department.
 * @return The name of the department.
 */
std::string Department::getDepartmentName() const {
  return m_departmentName;
}

/**
 * Lists all employees in the department.
 */
void Department::listEmployees() const {
  for (const auto& emp : m_employeeList) {
    std::cout << emp->getDetails() << std::endl;
  }
}

/**
 * Gets the list of employees in the department.
 * @return A vector of pointers to employees.
 */
std::vector<Employee*> Department::getEmployeeList() const {
  std::vector<Employee*> employeePtrs;
  for (const auto& emp : m_employeeList) {
    employeePtrs.push_back(emp.get());
  }
  return employeePtrs;
}

/**
 * Adds a project to the department.
 * @param project The project to add.
 */
void Department::addProject(std::shared_ptr<Project> project) {
  m_projectList.push_back(project);
}

/**
 * Removes a project from the department.
 * @param projectId The ID of the project to remove.
 */
void Department::removeProject(int projectId) {
  m_projectList.erase(std::remove_if(m_projectList.begin(), m_projectList.end(),
    [projectId](const std::shared_ptr<Project>& proj) { return proj->getId() == projectId; }), m_projectList.end());
}

/**
 * Gets the list of projects in the department.
 * @return A vector of pointers to projects.
 */
std::vector<std::shared_ptr<Project>> Department::getProjectList() const {
  return m_projectList;
}