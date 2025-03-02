#include "employee.h"
#include <string>
#include <sstream>
#include <stdexcept>

/**
 * Constructs an Employee object.
 * @param id The ID of the employee.
 * @param name The name of the employee.
 * @param salary The salary of the employee.
 */
Employee::Employee(int id, const std::string& name, double salary) 
  : id(id), 
    name(name), 
    salary(salary) {}

/**
 * Gets the details of the employee.
 * @return A string containing the details of the employee.
 */
std::string Employee::getDetails() const {
  std::stringstream ss;
  ss << "ID: " << id << ", Name: " << name << ", Salary: " << salary;
  return ss.str();
}

/**
 * Sets the salary of the employee.
 * @param newSalary The new salary to be set.
 */
void Employee::setSalary(const double newSalary) {
  if (newSalary < 0) {
    throw std::invalid_argument("Salary cannot be negative");
  }
  salary = newSalary;
}

/**
 * Gets the salary of the employee.
 * @return The salary of the employee.
 */
double Employee::getSalary() const {
  return salary;
}

/**
 * Gets the name of the employee.
 * @return The name of the employee.
 */
std::string Employee::getName() const {
  return name;
}

/**
 * Gets the ID of the employee.
 * @return The ID of the employee.
 */
int Employee::getId() const {
  return id;
}

