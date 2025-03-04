1) Modify the script to add a column to the 'employees' table to hold an update timestamp.
- The column should be named 'update_timestamp'
- The column should be of type 'datetime'
- The column should have a default value of 'GETDATE()'
- The column should not allow null values
- the column should be updated whenever the 'developers' or 'managers' tables are updated.

2) Create a C++  class to model the 'departments' table.
- Create a default constructor and a required constructor that accepts all arguments
- Create getters an setters for all fields

3) Modify the result to include error handling, raise exceptions where appropriate.

4) Recommend improvements to the class to improve performance and simplify testing.

5) Summarize the best practices from this site: https://learn.microsoft.com/en-us/azure/architecture/guide/architecture-styles/microservices

5) This class will be used as part of a distributed sevice that will include entities described by all tables in the 'company_db' database.
- recommmend interfaces that would be used as repository contracts for these types and other service commponents as I extend the implementation.
- Follow best practices as described here: https://learn.microsoft.com/en-us/azure/architecture/guide/architecture-styles/microservices