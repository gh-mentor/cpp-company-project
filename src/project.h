#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <vector>
#include <memory>

class Employee;

/**
 * @class Project
 * @brief Represents a project in the company.
 */
class Project {
public:
  /**
   * @brief Constructs a Project object.
   * @param id The ID of the project.
   * @param name The name of the project.
   */
  Project(int id, const std::string& name);

  /**
   * @brief Gets the details of the project.
   * @return A string containing the details of the project.
   */
  std::string getDetails() const;

  /**
   * @brief Adds an employee to the project.
   * @param employee The employee to add.
   */
  void addEmployee(std::shared_ptr<Employee> employee);

  /**
   * @brief Removes an employee from the project.
   * @param employeeId The ID of the employee to remove.
   */
  void removeEmployee(int employeeId);

  /**
   * @brief Gets the list of employees in the project.
   * @return A vector of pointers to employees.
   */
  std::vector<std::shared_ptr<Employee>> getEmployeeList() const;

private:
  int m_id;
  std::string m_name;
  std::vector<std::shared_ptr<Employee>> m_employeeList;
};

#endif // PROJECT_H
