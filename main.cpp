
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

void sum(int a, double b){
  double sum = a + b;
  cout << "\nThe sum of a and b is " << sum << endl;
}

float product(float a, double b){
   return a*b;
}

void isOld(int age){
  if(age >= 18){
    cout << "The person whose age is " << age << " is old" << endl;
  }else{
   cout << "The person whose age is " << age << " is still young" << endl;
  }
}

int main(){

  cout << "Hello world\n";

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

  sum(15, 25.5);
  isOld(17);
  isOld(25);

 char v = 'V';
  cout << "The character v is " << v <<  endl;

  float x;
  double y;

  cout << "Enter the value of x: ";
  cin >> x;

  cout << "Enter the value of y: ";
  cin >> y;

  cout << "The product of "<< x << " and " << y << " is " << product(x, y) << endl;



  return 0;

}



