Prompt Engineering Instructions to recreate the project files and classes

General Guidelines:

Use const for variables that do not change.
Use auto for type inference where appropriate.
Prefer lambda functions for anonymous functions.
Verify that all included headers are used.
Check for proper error handling in all functions.
Ensure all loops have proper termination conditions.
Use descriptive names for variables and functions.
Avoid deeply nested code; refactor into smaller functions if necessary.
Ensure all abstract base classes have a virtual destructor.
Use Doxygen comments for all classes and functions.
Use std::stringstream for string concatenation.

Step 1) Create the Company class:

Header File (company.h):

Define the Company class.
Include member variables: std::string name, std::vector<Department> departments.
Include member functions: addDepartment, removeDepartment, getDepartment.
Use PascalCase for class names and camelCase for function names.
Use m_ prefix for private member variables.
Ensure all functions have Doxygen comments.
Source File (company.cpp):

Implement the functions declared in the header file.
Ensure proper error handling using exceptions.
Use std::stringstream for string concatenation.

Step 2) Create the Department class:

Header File (department.h):

Define the Department class.
Include member variables: std::string name, std::vector<Employee> employees.
Include member functions: addEmployee, removeEmployee, getEmployee.
Use PascalCase for class names and camelCase for function names.
Use m_ prefix for private member variables.
Ensure all functions have Doxygen comments.
Source File (department.cpp):

Implement the functions declared in the header file.
Ensure proper error handling using exceptions.
Use std::stringstream for string concatenation.

Step 3) Create the Developer class:

Header File (developer.h):

Define the Developer class.
Include member variables: std::string programmingLanguage, std::vector<std::string> projects.
Include member functions: addProject, removeProject, getProjects.
Use PascalCase for class names and camelCase for function names.
Use m_ prefix for private member variables.
Ensure all functions have Doxygen comments.
Source File (developer.cpp):

Implement the functions declared in the header file.
Ensure proper error handling using exceptions.
Use std::stringstream for string concatenation.

Step 4) Create the Employee class:

Header File (employee.h):

Define the Employee class.
Include member variables: std::string name, int id, double salary.
Include member functions: getDetails, getSalary, setSalary.
Use PascalCase for class names and camelCase for function names.
Use m_ prefix for private member variables.
Ensure all functions have Doxygen comments.
Source File (employee.cpp):

Implement the functions declared in the header file.
Ensure proper error handling using exceptions.
Use std::stringstream for string concatenation.

Step 5) Create the Manager class:

Header File (manager.h):

Define the Manager class.
Include member variables: std::string department.
Include member functions: getDepartment, setDepartment, getDetails.
Use PascalCase for class names and camelCase for function names.
Use m_ prefix for private member variables.
Ensure all functions have Doxygen comments.
Source File (manager.cpp):

Implement the functions declared in the header file.
Ensure proper error handling using exceptions.
Use std::stringstream for string concatenation.


