# COEN 243 – Winter 2025  
## Assignment 4 – Two Dimensional Arrays/Strings/User-Defined Classes  
**Deadline:** March 21st by 11:59 pm  

## Submission Instructions  
- Provide comments for your code.  
- Compress the files using zip or other tools.  
- Submit the zip file on Moodle.  
- Do not submit executable files.  
- All submissions must be done through Moodle.  

---  

## Questions  

### Q1. (30 marks) Two-Dimensional Array – Diagonal Sum  
Write a C++ program to add the elements on the two diagonals of a square two-dimensional integer array and display that sum. Ensure that if there is a middle element in the array, it is not counted twice in the sum.  

#### Example  
For the array:  
```
1  2  3  4  
5  6  7  8  
9 10 11 12  
13 14 15 16  
```
Your program should display **68** (1+6+11+16+4+7+10+13).  

For the array:  
```
1  2  3  
5  6  7  
9 10 11  
```
Your program should display **30** (1+6+11+3+9) (note that the 6 is not counted twice).  

---  

### Q2. (35 marks) Employee Class  
Create a class called `Employee`, which represents the employees of a department at the university.  

#### Attributes  
An employee is defined with the following attributes:  
- **employee id** (int)  
- **first name** (string)  
- **last name** (string)  
- **date of birth** (string)  
- **address** (string)  
- **year hired** (int)  
- **salary** (double)  
- **telephone** (area code (int) and 7-digit telephone number (string))  

#### Member Functions  
The member functions of the class `Employee` must perform the following operations:  
- Return the employee id number.  
- Return the first name of the employee.  
- Modify the first name of the employee.  
- Return the last name of the employee.  
- Modify the last name of the employee.  
- Return the hired year of the employee.  
- Return the full name (i.e., first name and last name).  
- Return the date of birth.  
- Modify the date of birth.  
- Return the salary of the employee.  
- Modify the salary of the employee.  
- Return the address of the employee.  
- Modify the address of the employee.  
- Return the telephone number.  
- Modify the telephone number.  
- Return `true` if two given employees have the same last name; otherwise, return `false`.  
- Return `true` if two employees have the same salary or were hired in the same year; otherwise, return `false`.  

#### Testing  
Test your class by prompting the user to enter information about two particular employees. Create two objects of the class `Employee` with the information entered by the user, and test the member functions of the class.  

#### Deliverables  
- `employee.h`: Contains the specification of the class.  
- `employee.cpp`: Contains the implementation of the member functions of the class.  
- `testemployee.cpp`: Contains the `main` function.  

---  

### Q3. (35 marks) Department Class  
Create a class called `Department`, which represents the information of a department at the university.  

#### Attributes  
A department is defined with the following attributes:  
- **identification number** (string)  
- **name** (string)  
- **department history** (string)  
- **list of employees** (array of type `Employee` from the previous question)  

*Note:* A department cannot have more than **25 employees**.  

#### Member Functions  
The member functions of the class `Department` must perform the following operations:  
- Return the department identification number.  
- Return the department name.  
- Modify the department name.  
- Return the department history.  
- Modify the department history.  
- Add a new employee to the department.  
- Remove an employee from the department.  
- Search if an employee with a certain employee id works in the department.  
- Output the list of employees.  
- Output the number of employees.  

#### Testing  
Test your class by prompting the user to enter information about a university department and five employees. Create a department object and five objects of the class `Employee`. Assign the employees to the department and test the member functions of the class.  

#### Deliverables  
- `employee.h`: Contains the specification of the class.  
- `employee.cpp`: Contains the implementation of the member functions of the class.  
- `department.h`: Contains the specification of the class.  
- `department.cpp`: Contains the implementation of the member functions of the class.  
- `testdepartment.cpp`: Contains the `main` function.  

