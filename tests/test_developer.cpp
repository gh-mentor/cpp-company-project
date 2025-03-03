#include "doctest.h"
#include "../src/employee.h"
#include "../src/developer.h"
#include <stdexcept>

/**
 * Test case for Developer class.
 */
TEST_CASE("Developer class") {
  Developer developer(2, "Bob", 70000.0);

  SUBCASE("getDetails") {
    CHECK(developer.getDetails() == "ID: 2, Name: Bob, Salary: 70000");
  }

  SUBCASE("setSalary and getSalary") {
    developer.setSalary(80000.0);
    CHECK(developer.getSalary() == 80000.0);

    CHECK_THROWS_AS(developer.setSalary(-5000.0), std::invalid_argument);
  }

  SUBCASE("getName") {
    CHECK(developer.getName() == "Bob");
  }

  SUBCASE("getId") {
    CHECK(developer.getId() == 2);
  }

  SUBCASE("addProgrammingLanguage and getProgrammingLanguages") {
    developer.addProgrammingLanguage("C++");
    developer.addProgrammingLanguage("Python");
    const auto& languages = developer.getProgrammingLanguages();
    CHECK(languages.size() == 2);
    CHECK(languages[0] == "C++");
    CHECK(languages[1] == "Python");
  }

  SUBCASE("writeCode") {
    // Assuming writeCode does something observable, add appropriate checks here
    // For now, just a placeholder as the function's behavior is not defined
    developer.writeCode("print('Hello, World!')");
  }
}