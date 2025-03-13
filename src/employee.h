#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

/**
 * @class Employee
 * @brief Represents an employee in the company.
 */
class Employee {
public:
  /**
   * @brief Constructs an Employee object.
   * @param id The ID of the employee.
   * @param name The name of the employee.
   * @param salary The salary of the employee.
   */
  Employee(int id, const std::string& name, double salary);

  /**
   * @brief Gets the details of the employee.
   * @return A string containing the details of the employee.
   */
  std::string getDetails() const;

  /**
   * @brief Sets the salary of the employee.
   * @param salary The new salary of the employee.
   */
  void setSalary(double salary);

  /**
   * @brief Gets the salary of the employee.
   * @return The salary of the employee.
   */
  double getSalary() const;

  /**
   * @brief Gets the name of the employee.
   * @return The name of the employee.
   */
  std::string getName() const;

  /**
   * @brief Gets the ID of the employee.
   * @return The ID of the employee.
   */
  int getId() const;

  /**
   * @brief Prints a ping message to indicate the employee is active.
   */
  virtual void ping() const;

private:
  int m_id;
  std::string m_name;
  double m_salary;
};

#endif // EMPLOYEE_H