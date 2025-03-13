#include "employee.h"
#include <stdexcept>
#include <sstream>

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

