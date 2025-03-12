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
* TODO: Implement a Manager::getDepartment method.
*/


/**
 * TODO: Implement a Manager::ping method.
 */
