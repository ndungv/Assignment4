//Joseph Tchatchoua Nchuisseu ID: 40309336
//
//employee.cpp
//member function
#include <iostream>
#include "employee.h"
#include <iomanip>
using namespace std;

//Default constructor
Employee::Employee() {
    employeeId = 0;
    first_name = "";
    last_name = "";
    dob = "";
    address = "";
    year_hired = 0;
    salary = 0;
    tel_area = 0;
    tel_num = "";
}

//Modifiying employee attributes
void Employee::set_Info(int number){

    cout << "Please enter these data of No."<<number<<" employee in respectively order (separated by space): "<<endl;
    cout<<"[ID] [last name]"<<endl;
    cin >> employeeId >>last_name;
    cin.ignore();

    cout <<"[First name]"<<endl;
    getline(cin, first_name);

    cout<<"[Date of birth]"<<endl;
    getline(cin, dob);

    cout <<"[Hired year] [Salary]"<<endl;
    cin >> year_hired>>salary;
    cin.ignore();

    cout <<"[Address]"<<endl;
    getline(cin, address);

    cout <<"[Telephone area] [Telephone number]"<<endl;
    cin >>tel_area>>tel_num;
}

//Accessors and mutators of employee
void Employee::set_IdNum(int id){
    employeeId = id;
}

void Employee::set_firstName(string first) {
    first_name = first;
}

void Employee::set_lastName(string last) {
    last_name = last;
}

void Employee::set_hiredYear(int hired) {
    year_hired = hired;
}

void Employee::set_dob(string date) {
    dob = date;
}

void Employee::set_salary(double sal) {
    salary = sal;
}

void Employee::set_address(string add) {
    address = add;
}

void Employee::set_telArea(int area) {
    tel_area = area;
}

void Employee::set_telNum(string num) {
    tel_num = num;
}




//Call functions
int Employee::getId() {
    return employeeId;
}
string Employee::getFirstname() {
    return first_name;
}

string Employee::getLastname() {
    return last_name;
}
string Employee::getdob() {
    return dob;
}

string Employee::getAddress() {
    return address;
}


int Employee::getHiredyear() {
    return year_hired;
}

double Employee::getSalary() {
    return salary;
}

int Employee::getArea() {
    return tel_area;
}

string Employee::getNum() {
    return tel_num;
}


//Returning attributes of employee
void Employee::print_Info(int num, Employee (&emp)[2]){
    cout<<"Employee No."<<num+1<<endl;
    cout << "Id: " << emp[num].getId() << endl;
    cout << "First Last Name: "<<emp[num].getFirstname()<<" "<<emp[num].getLastname()<<endl;
    cout <<"Hired year: "<<emp[num].getHiredyear()<<endl;
    cout<<"Date of birth: "<<emp[num].getdob()<<endl;
    cout << "Salary: "<<fixed<<setprecision(0)<<emp[num].getSalary()<<endl;
    cout<<"Address: "<<emp[num].getAddress()<<endl;
    cout<<"Telephone: "<<emp[num].getArea()<<" "<<emp[num].getNum()<<endl;
}

//Cheking same laste name
bool Employee::sameLastname(Employee emp[]) {
    if (emp[0].getLastname() == emp[1].getLastname()) {
        return true;
    }
    else {
        return false;
    }
}

//Cheking same salary
bool Employee::sameSalary(Employee emp[]) {
    if (emp[0].getSalary() == emp[1].getSalary()) {
        return true;
    }
    else {
        return false;
    }
}

//Cheking same hired year
bool Employee::sameHiredyear(Employee emp[]) {
    if (emp[1].getHiredyear() == emp[0].getHiredyear()) {
        return true;
    }
    else {
        return false;
    }
}