//Function Overloading 
#include <iostream>
using namespace std;

class math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main()
{
    math m;
    cout << "Sum of 2 integers: " << m.add(5, 10) << endl;
    cout << "Sum of 2 floats: " << m.add(5.5f, 10.3f) << endl;
    cout << "Sum of 3 integers: " << m.add(5, 10, 15) << endl;
    return 0;
}



// Constructor Overloading 
#include <iostream>
using namespace std;

class  student {
    int rollno;
    float marks;
public:
//default constructor
    student() {
        rollno = 0;
        marks = 0.0;
    }
    // constructor with one parameters
    student(int r) {
        rollno = r;
        marks =0;
    }
    // constructor with two parameters  
    student(int r, float m) {
        rollno = r;
        marks = m;
    }
    void display() {
        cout << "Roll No: " << rollno << ", Marks: " << marks << endl;
    }
};
int main() {
    student s1; // calls default constructor
    student s2(101); // calls constructor with one parameter
    student s3(102, 95.5f); // calls constructor with two parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

// Function Templates
#include <iostream>
using namespace std;

template <class T>
T findMax(T a, T b) {
    if(a > b)
        return a;
    else
        return b;
}
int main(){
    cout<<"Max of integers: "<<findMax(10, 20)<<endl;
    cout<<"Max of floats: "<<findMax(10.5f, 20.3f)<<endl;
    cout<<"Max of characters: "<<findMax('A', 'Z')<<endl;
    return 0;
}