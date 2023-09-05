
#include <iostream>

using namespace std;

class Employee {

public: int id;
public: double salary;
public: string name, address;

 void display(){

    std::cout << "Employee ID: " << id << std::endl;
    std::cout << "Employee Name: " << name << std::endl;
    std::cout << "Employee Salary: " << salary << std::endl;

 }

};

int main(){

  cout << "Hello worldies\n\n";

  Employee emp;
  emp.name = "Dallington";
  emp.id =900;
  emp.address = "Kampala";
  emp.salary = 1000000;
  emp.display();

  return 0;

}



