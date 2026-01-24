#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
int roll;
string name;
float marks;

public:
// constructor 
Student(){
    roll=0;
    name="";
    marks= 0.0;
} 

void input(){
   cout << "Enter roll number: ";
   cin >> roll;
   cin.ignore();
   cout << "Enter Name: ";
   getline(cin,name);
   cout << "Enter Marks: ";
   cin >> marks;
}
void display(){
    cout << roll << "\t" << name << "\t" << marks << endl;
}
~Student(){
    cout << "Student object with roll" << roll << "is Destroyed." << endl;
}
};
int main(){
   int n;
   cout << "Enter no. of Students: ";
   cin >> n;
   Student* Students = new Student[n];
   for(int i=0;i<n;i++){
    cout << "\nEnter Details of Students: " << i+1 << endl ;
    Students[i].input();
   }
       cout << "\nRoll\tName\tMarks\n";
   for(int i=0;i<n;i++){
    Students[i].display();
   }
   delete[] Students;
   return 0;
}