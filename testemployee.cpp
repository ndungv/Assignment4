//main function
//testemployee.cpp
#include <iostream>
#include "employee.h"
using namespace std;

const int employee_num = 2;
Employee emp[employee_num];

void repeat();
void printer(Employee (&emp)[2]);
void modifier();

int main() {


  for (int i = 0; i < employee_num; i++) {
    emp[i].set_Info(i + 1);
    cout << endl << "-------------" << endl;
  }

  printer(emp);

}

void repeat() {
  string choice;
  while (true) {
    cout<<"Do you want to modify employee info?(yes/no)"<<endl;
    cin >> choice;

    if (choice == "yes") {
      modifier();
    }
    else if (choice == "no"){
      cout <<"Thank you for using my program!";
      exit(0);
    }
    else {
      cout<<"Please enter [yes/no]"<<endl;
    }
  }
}

void printer(Employee (&emp)[2]) {
  cout <<"--------------------"<<endl;
  cout<<"EMPLOYEES INFO:"<<endl;
  Employee::print_Info(0, emp);
  cout<<endl;
  cout <<"-------------"<<endl;
  Employee::print_Info(1, emp);
  cout<<endl;
  cout <<"--------------------"<<endl;
  cout<<"Two employee has the same last name is: " <<boolalpha<<Employee::sameLastname(emp)<<endl;
  cout<<"Two employee has the same hired year is: "<<boolalpha<<Employee::sameHiredyear(emp)<<endl;
  cout<<"Two employee has the same salary is: "<<boolalpha<<Employee::sameSalary(emp)<<endl;
  repeat();
}


void modifier() {
  int emp_input;
  int emp_num;
  int modify_data;

  int modify_id;
  string modify_first;
  string modify_last;
  string modify_dob;
  string modify_add;
  int modify_year;
  double modify_salary;
  int modify_area;
  string modify_num;

  cout<<"Enter employee number (1 or 2) to modify: "<<endl;
  cin >> emp_input;
  emp_num = emp_input-1;

  cout <<"Enter employee info you would like to modify: "<<endl;
  cout <<"1.[ID] \n2.[first name]\n3.[last name]\n4.[Hired year]\n5.[Date of Birth]\n6.[Salary]\n7.[Address]\n8.[Telephone area]\n9.[Telephone number]"<<endl;
  cin >> modify_data;

  switch(modify_data){
    case 1: {
      cout <<"Enter new ID for employee No."<<emp_num+1<<endl;
      cin>>modify_id;
      cin.ignore();
      emp[emp_num].set_IdNum(modify_id);
      break;
    }
    case 2: {
      cout <<"Enter new first name for employee No."<<emp_num+1<<endl;
      getline(cin, modify_first);
      emp[emp_num].set_firstName(modify_first);
      break;
    }
    case 3: {
      cout <<"Enter new last name for employee No."<<emp_num+1<<endl;
      getline(cin, modify_last);
      emp[emp_num].set_lastName(modify_last);
      break;
    }
    case 4: {
      cout <<"Enter new hired year for employee No."<<emp_num+1<<endl;
      cin>>modify_year;
      emp[emp_num].set_hiredYear(modify_year);
      break;
    }
    case 5: {
      cout <<"Enter new Date of birth for employee No."<<emp_num+1<<endl;
      cin.ignore();
      getline(cin, modify_dob);
      emp[emp_num].set_dob(modify_dob);
      break;
    }
    case 6: {
      cout <<"Enter new salary for employee No."<<emp_num+1<<endl;
      cin>>modify_salary;
      emp[emp_num].set_salary(modify_salary);
      break;
    }
    case 7: {
      cout <<"Enter new address for employee No."<<emp_num+1<<endl;
      cin.ignore();
      getline(cin, modify_add);
      emp[emp_num].set_address(modify_add);
      break;
    }
    case 8: {
      cout <<"Enter new telephone area for employee No."<<emp_num+1<<endl;
      cin>>modify_area;
      emp[emp_num].set_telArea(modify_area);
      break;
    }
    case 9: {
      cout <<"Enter new telephone number for employee No."<<emp_num+1<<endl;
      cin>>modify_num;
      emp[emp_num].set_telNum(modify_num);
      break;
    }
  }
  cout<<"Updated info: "<<endl;
  printer(emp);
  repeat();
}




