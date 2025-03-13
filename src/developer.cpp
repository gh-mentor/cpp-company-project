#include "developer.h"
#include <iostream>
#include <stdexcept>

Developer::Developer(int id, const std::string& name, double salary)
  : Employee(id, name, salary) {}

void Developer::addProgrammingLanguage(const std::string& language) {
  m_programmingLanguages.push_back(language);
}

const std::vector<std::string>& Developer::getProgrammingLanguages() const {
  return m_programmingLanguages;
}

void Developer::writeCode(const std::string& code) {
  // For now, just print the code to simulate writing it
  std::cout << "Writing code: " << code << std::endl;
}