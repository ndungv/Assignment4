//employee.h
#pragma once
#include <string>
using namespace std;

class Employee {

public:
    Employee();
    static void print_Info(int, Employee (&emp)[2]);

    static bool sameLastname(Employee emp[]);
    static bool sameSalary(Employee emp[]);
    static bool sameHiredyear(Employee emp[]);


    void set_Info(int number);


    int getId();
    string getFirstname();
    string getLastname();
    string getdob();
    string getAddress();
    double getSalary();
    int getHiredyear();
    int getArea();
    string getNum();

    void set_IdNum(int);
    void set_firstName(string);
    void set_lastName(string);
    void set_hiredYear(int);
    void set_dob(string);
    void set_salary(double);
    void set_address(string);
    void set_telArea(int);
    void set_telNum(string);

    // void set_IdNum(int id);
    // void set_firstName(string);
    // void set_lastName(string);
    // void set_hiredYear(int);
    // void set_dob(string);
    // void set_salary(double);
    // void set_address(string);
    // void set_telArea(int);
    // void set_telNum(string);
private:
    int employeeId;
    string first_name;
    string last_name;
    string dob;
    string address;
    int year_hired;
    double salary;
    int tel_area;
    string tel_num;
};