compile and run your tests with the following commands:

```bash

g++ -std=c++20 -I./src -I./tests tests/main.cpp tests/test_company.cpp src/employee.cpp src/manager.cpp src/developer.cpp src/department.cpp src/company.cpp -o tests/test_executable
./tests/test_executable