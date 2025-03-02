#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

/**
 * Represents an employee in the company.
 */
class Employee {
private:
  int id;
  std::string name;
  double salary;

public:
  Employee(int id, const std::string& name, double salary);
  
  std::string getDetails() const;
  void setSalary(double salary);
  double getSalary() const;
  std::string getName() const;
  int getId() const;
  
  virtual ~Employee() = default; // Ensure virtual destructor for base class
};

#endif // EMPLOYEE_H