// filepath: /cpp-company-project/cpp-company-project/src/manager.cpp
#include "manager.h"
#include "employee.h"

// Constructor for Manager class
Manager::Manager(int id, const std::string& name, double salary, const std::string& department)
    : Employee(id, name, salary), department(department) {}

/**
 * Gets the details of the manager.
 * @return The details of the manager as a string.
 */
std::string Manager::getDetails() const {
    return Employee::getDetails() + " and manages the " + department + " department";
}

/**
 * Gets the department of the manager.
 * @return The department of the manager.
 */
std::string Manager::getDepartment() const {
    return department;
}