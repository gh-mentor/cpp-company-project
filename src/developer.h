#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "employee.h"
#include <vector>
#include <string>

/**
 * Represents a developer in the company.
 */
class Developer : public Employee {
private:
  std::vector<std::string> programmingLanguages;

public:
  Developer(int id, const std::string& name, double salary);
  
  void writeCode(const std::string& code);
  void addProgrammingLanguage(const std::string& language);
  const std::vector<std::string>& getProgrammingLanguages() const;

  void ping() const override; // Override pure virtual method
};

#endif // DEVELOPER_H