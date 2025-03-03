// filepath: /cpp-company-project/cpp-company-project/src/manager.cpp
#include "manager.h"
#include "employee.h"
#include <sstream>
#include <iostream>

/**
 * Constructor for Manager class.
 * @param id The ID of the manager.
 * @param name The name of the manager.
 * @param salary The salary of the manager.
 * @param department The department of the manager.
 */
Manager::Manager(int id, const std::string& name, double salary, const std::string& department)
    : Employee(id, name, salary), department(department) {}

/**
 * Gets the details of the manager.
 * @return The details of the manager as a string.
 */
std::string Manager::getDetails() const {
  std::stringstream ss;
  ss << "ID: " << getId() << ", Name: " << getName() << ", Salary: " << getSalary() << ", Department: " << department;
  return ss.str();
}

/**
 * Gets the department of the manager.
 * @return The department of the manager.
 */
std::string Manager::getDepartment() const {
  return department;
}

/**
 * Stub method for ping.
 */
void Manager::ping() const {
  std::cout << "Manager " << getName() << " is active." << std::endl;
}