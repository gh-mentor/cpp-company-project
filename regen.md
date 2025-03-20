@workspace I need a technical report describing this project. The report must include a comprehensive description of all classes, and key features of the project.

Show a list of recommended improvements. I want to be sure to adhere to SOLID design principles, and the code should be optimized and free of any security vulnerabilities.

Do all classes in the 'src' folder have corresponding tests?

Are there any security vulnerabilities?

Can you show me how to convert the Developer to typesafe Python.

1) Review manager.cpp

2) Create a test 'tests/test_manager.cpp' to verify the functionality of the Manager class using the DocTest framework. 

3) Define and implement a Developer class 'src/developer.h' and 'src/developer.cpp' that extends the Employee class. The class should satisfy the test 'tests/test_developer.cpp'. 

4) update 'CMakeLists.txt based on the changes.

5) Define and implement a QA class 'src/qa.h' and 'src/qa.cpp' that extends the Employee class. The class should have methods that are appropriate for a QA professional.

6) Create a test 'tests/test_QA.cpp' to verify the functionality of the Manager class using the DocTest framework. 

7) update 'CMakeLists.txt based on the changes.

8) Show a sample workflow based on the instructions in the active window and the details found in 'CMakeLists.txt'

9) I would like to modify the code such that each employee will hold a collection of active projects. Each project will be defined by a separate class that will maintain a collection of projects. There will be a many-to-many relationship between the employee class and the class that maintains the projects.

10) Show how to modify the employee test to include the new Project class and the many-to-many relationship.Create tests that verify the association between employees and projects.

11) Show how to create tests for the project manager class.