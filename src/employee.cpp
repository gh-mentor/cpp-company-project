#include "employee.h"
#include "project.h"
#include <stdexcept>
#include <sstream>
#include <iostream>
#include <algorithm>

Employee::Employee(int id, const std::string& name, double salary)
  : m_id(id), m_name(name), m_salary(salary) {}

std::string Employee::getDetails() const {
  std::stringstream ss;
  ss << "ID: " << m_id << ", Name: " << m_name << ", Salary: " << m_salary;
  return ss.str();
}

void Employee::setSalary(double salary) {
  if (salary < 0) {
    throw std::invalid_argument("Salary cannot be negative");
  }
  m_salary = salary;
}

double Employee::getSalary() const {
  return m_salary;
}

std::string Employee::getName() const {
  return m_name;
}

int Employee::getId() const {
  return m_id;
}

void Employee::ping() const {
  std::cout << "Employee " << m_name << " is active." << std::endl;
}

/**
 * Adds a project to the employee.
 * @param project The project to add.
 */
void Employee::addProject(std::shared_ptr<Project> project) {
  m_projectList.push_back(project);
}

/**
 * Removes a project from the employee.
 * @param projectId The ID of the project to remove.
 */
void Employee::removeProject(int projectId) {
  m_projectList.erase(std::remove_if(m_projectList.begin(), m_projectList.end(),
    [projectId](const std::shared_ptr<Project>& proj) { return proj->getId() == projectId; }), m_projectList.end());
}

/**
 * Gets the list of projects the employee is working on.
 * @return A vector of pointers to projects.
 */
std::vector<std::shared_ptr<Project>> Employee::getProjectList() const {
  return m_projectList;
}

