# Project Overview

This project is a C++ application that models a company structure, including classes for Company, Department, Employee, Developer, and Manager. Each class is designed to encapsulate specific functionalities and properties, promoting a clear separation of design and implementation.

## Project Structure

The project is organized into the following directories and files:

```
cpp-company-project
├── src
│   ├── company.cpp        // Implementation of the Company class
│   ├── company.h          // Declaration of the Company class
│   ├── department.cpp      // Implementation of the Department class
│   ├── department.h        // Declaration of the Department class
│   ├── employee.cpp        // Implementation of the Employee class
│   ├── employee.h          // Declaration of the Employee class
│   ├── developer.cpp       // Implementation of the Developer class
│   ├── developer.h         // Declaration of the Developer class
│   ├── manager.cpp         // Implementation of the Manager class
│   ├── manager.h           // Declaration of the Manager class
├── .github
│   └── copilot-instructions.md // Instructions for using GitHub Copilot
├── copilot-config
│   └── copilot-review-selection.json // Configuration for Copilot's review selection
└── README.md               // Project documentation
```

## Setup Instructions

1. **Clone the Repository**: 
   ```
   git clone <repository-url>
   ```

2. **Navigate to the Project Directory**: 
   ```
   cd cpp-company-project
   ```

3. **Build the Project**: 
   Use your preferred C++ compiler to build the project. For example, using g++:
   ```
   g++ -o companyApp src/*.cpp
   ```

4. **Run the Application**: 
   ```
   ./companyApp
   ```

## Usage Guidelines

- The `Company` class manages departments and employees.
- The `Department` class handles operations specific to a department.
- The `Employee` class serves as a base class for `Developer` and `Manager`.
- The `Developer` class includes functionalities specific to developers.
- The `Manager` class includes functionalities specific to managers.

## Contributing

Contributions are welcome! Please submit a pull request or open an issue for any enhancements or bug fixes.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.