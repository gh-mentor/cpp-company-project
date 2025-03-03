// src/developer.cpp
#include "developer.h"
#include <iostream>
#include <vector>
#include <string>

Developer::Developer(int id, const std::string& name, double salary)
    : Employee(id, name, salary) {
}

/**
 * Writes code.
 * @param code The code to be written.
 */
void Developer::writeCode(const std::string& code) {
  std::cout << getName() << " is writing code: " << code << std::endl;
}

/**
 * Adds a programming language to the developer's skill set.
 * @param language The programming language to be added.
 */
void Developer::addProgrammingLanguage(const std::string& language) {
  programmingLanguages.push_back(language);
}

/**
 * Gets the programming languages known by the developer.
 * @return A vector of programming languages.
 */
const std::vector<std::string>& Developer::getProgrammingLanguages() const {
  return programmingLanguages;
}

/**
 * Stub method for ping.
 */
void Developer::ping() const {
  std::cout << "Developer " << getName() << " is active." << std::endl;
}