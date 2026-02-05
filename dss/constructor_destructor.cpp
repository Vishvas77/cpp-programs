#include <iostream>
using namespace std;
class Student {
private:
    int rollNumber;
    double marks;
    public:
    Student(int roll, double m) {
        rollNumber = roll;
        marks = m;
    }
    ~Student() {
       cout << "Destructor called for roll number: " << rollNumber << endl;
    }
    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    int x;
    double y;
    cout << "Enter roll number and marks: ";
    cin >> x >> y;
    Student s1(x, y); 
    // Student s2(502, 90.0);
    cout << "Student details:" << endl;
    s1.display();
    // cout << "Student 2 details:" << endl;
    // s2.display();
    return 0;   
}