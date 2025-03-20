//main function
//testemployee.cpp
#include <iostream>
#include "employee.h"
using namespace std;

Employee data1;
Employee data2;

bool sameLastname();
bool sameSalary();
bool sameHiredyear();

int main() {

  data1.set_Info(1);
  cout<<endl;
  cout <<"-------------"<<endl;
  data2.set_Info(2);
  cout<<endl;
  cout <<"--------------------"<<endl;
  cout<<"EMPLOYEES INFO:"<<endl;
  data1.print_Info(1);
  cout<<endl;
  cout <<"-------------"<<endl;
  data2.print_Info(2);
  cout<<endl;
  cout <<"--------------------"<<endl;
  cout<<"Two employee has the same last name is: " <<boolalpha<<sameLastname()<<endl;
  cout<<"Two employee has the same hired year is: "<<boolalpha<<sameHiredyear()<<endl;
  cout<<"Two employee has the same salary is: "<<boolalpha<<sameSalary()<<endl;

}

bool sameLastname() {
  if (data1.getLastname() == data2.getLastname()) {
    return true;
  }
  else {
    return false;
  }
}

bool sameSalary() {
  if (data1.getSalary() == data2.getSalary()) {
    return true;
  }
  else {
    return false;
  }
}

bool sameHiredyear() {
  if (data1.getHiredyear() == data2.getHiredyear()) {
    return true;
  }
  else {
    return false;
  }
}




