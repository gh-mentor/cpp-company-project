#include "project.h"
#include "employee.h"
#include <sstream>
#include <algorithm>

Project::Project(int id, const std::string& name) : m_id(id), m_name(name) {}

/**
 * Gets the details of the project.
 * @return A string containing the details of the project.
 */
std::string Project::getDetails() const {
  std::stringstream ss;
  ss << "Project ID: " << m_id << ", Name: " << m_name;
  return ss.str();
}

/**
 * Adds an employee to the project.
 * @param employee The employee to add.
 */
void Project::addEmployee(std::shared_ptr<Employee> employee) {
  m_employeeList.push_back(employee);
}

/**
 * Removes an employee from the project.
 * @param employeeId The ID of the employee to remove.
 */
void Project::removeEmployee(int employeeId) {
  m_employeeList.erase(std::remove_if(m_employeeList.begin(), m_employeeList.end(),
    [employeeId](const std::shared_ptr<Employee>& emp) { return emp->getId() == employeeId; }), m_employeeList.end());
}

/**
 * Gets the list of employees in the project.
 * @return A vector of pointers to employees.
 */
std::vector<std::shared_ptr<Employee>> Project::getEmployeeList() const {
  return m_employeeList;
}
