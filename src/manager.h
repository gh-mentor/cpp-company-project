#ifndef MANAGER_H
#define MANAGER_H

#include "employee.h"
#include <string>

class Manager : public Employee {
private:
  std::string department;

public:
  Manager(int id, const std::string& name, double salary, const std::string& department);
  
  std::string getDetails() const;
  
  std::string getDepartment() const;

  void ping() const override; // Override pure virtual method
};

#endif // MANAGER_H