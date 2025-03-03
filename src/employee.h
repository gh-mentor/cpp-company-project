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

    // Default copy constructor
    Employee(const Employee&) = default;
  
  std::string getDetails() const;
  void setSalary(double salary);
  double getSalary() const;
  std::string getName() const;
  int getId() const;
  
  virtual void ping() const = 0; // Pure virtual method

  virtual ~Employee() = default; // Ensure virtual destructor for base class
};

#endif // EMPLOYEE_H