
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


class Student {

    public: string stud_name;
    public: int stud_age;

     public: Student(string name, int age){
        this->stud_name = name;
        this->stud_age = age;
     }

     public: void getStudentDetails(){
        cout << "\n" << "Student name: " << stud_name << endl;
        cout << "Student age: " << stud_age << endl;
     }

};

int main(){

  cout << "Hello worldies\n\n";

  int a = 90;
  string name = "Dallington";


  std::cout << "\nThe value of a is " << a << std::endl;


  Employee emp;
  emp.name = "Dallington";
  emp.id =900;
  emp.address = "Kampala";
  emp.salary = 1000000;
  emp.display();

  Student stud("Dallington Asingwire", 90);
  stud.getStudentDetails();


  return 0;

}



