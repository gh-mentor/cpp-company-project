
These prompts will guide GitHub Copilot Chat to generate the necessary T-SQL script for managing a company's database.

 The script will include the following steps:
- Create the Database: Prompt to create the database company-db if it doesn't exist.
- Create Tables: Prompt to create tables for companies, employees, departments, developers, and managers.
- Create Relationships: Prompt to add foreign key constraints.
- Create Mappings: Prompt to create mapping tables for many-to-many relationships.
- Create Views: Prompt to create views to simplify data retrieval.
- Create Stored Procedures: Prompt to create stored procedures for common operations.

The script will be generated in the file `company-db.sql` in the `sql` directory.

## Steps to Generate T-SQL Script

1. Create the Database
Create a database named "company-db" if it doesn't already exist.

2. Create Tables
Create tables for a company database. The tables should include:
- A table for companies with an ID and name.
- A table for employees with an ID, name, salary, department ID, and company ID.
- A table for departments with an ID, name, and company ID.
- A table for developers with an ID, employee ID, and programming languages.
- A table for managers with an ID, employee ID, and department ID.
Relationships between the tables should be defined:
- Add foreign key constraints to the employee and department tables. The employee table should reference the department and company tables, and the department table should reference the company table. Additionally, create one-to-one relationships between the employee table and the developer and manager tables.

3. Create Views
Create a view that joins the employee and department tables to display employee details including ID, name, salary, and department name.

4. Create Stored Procedures
Create stored procedures for the company database. The procedures should include:
- A procedure to add a new employee with parameters for name, salary, department ID, and company ID.
- A procedure to retrieve employee details by employee ID.