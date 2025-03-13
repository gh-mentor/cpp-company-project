// filepath: /cpp-company-project/cpp-company-project/src/manager.cpp
#include "manager.h"
#include "employee.h"
#include <sstream>
#include <iostream>


Manager::Manager(int id, const std::string& name, double salary, const std::string& department)
    : Employee(id, name, salary), department(department) {}


std::string Manager::getDetails() const {
  std::stringstream ss;
  ss << "ID: " << getId() << ", Name: " << getName() << ", Salary: " << getSalary() << ", Department: " << department;
  return ss.str();
}

/**
 * Returns the department of the manager.
 * @return The department of the manager.
 */
std::string Manager::getDepartment() const {
  return department;
}

/**
 * Prints a ping message to indicate the manager is active.
 */
void Manager::ping() const {
  std::cout << "Manager " << getName() << " is active." << std::endl;
}
