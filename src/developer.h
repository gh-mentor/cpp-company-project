#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employee.h"
#include <vector>
#include <string>

/**
 * @class Developer
 * @brief Represents a developer in the company.
 */
class Developer : public Employee {
public:
  /**
   * @brief Constructs a Developer object.
   * @param id The ID of the developer.
   * @param name The name of the developer.
   * @param salary The salary of the developer.
   */
  Developer(int id, const std::string& name, double salary);

  /**
   * @brief Adds a programming language to the developer's skill set.
   * @param language The programming language to add.
   */
  void addProgrammingLanguage(const std::string& language);

  /**
   * @brief Gets the list of programming languages known by the developer.
   * @return A vector of programming languages.
   */
  const std::vector<std::string>& getProgrammingLanguages() const;

  /**
   * @brief Simulates the developer writing code.
   * @param code The code to write.
   */
  void writeCode(const std::string& code);

private:
  std::vector<std::string> m_programmingLanguages;
};

#endif // DEVELOPER_H