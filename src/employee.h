#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <vector>
#include <memory>

class Project;

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

  /**
   * @brief Adds a project to the employee.
   * @param project The project to add.
   */
  void addProject(std::shared_ptr<Project> project);

  /**
   * @brief Removes a project from the employee.
   * @param projectId The ID of the project to remove.
   */
  void removeProject(int projectId);

  /**
   * @brief Gets the list of projects the employee is working on.
   * @return A vector of pointers to projects.
   */
  std::vector<std::shared_ptr<Project>> getProjectList() const;

private:
  int m_id;
  std::string m_name;
  double m_salary;
  std::vector<std::shared_ptr<Project>> m_projectList;
};

#endif // EMPLOYEE_H