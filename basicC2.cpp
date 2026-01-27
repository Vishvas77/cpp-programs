#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function declarations
int add(int a, int b);
double area(double radius);
void greeting(const string& message);

int main()
{
    string message;

    cout << "Enter greeting message: ";
    getline(cin, message);          
    

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    greeting(message);
    cout << "Sum = " << add(a, b) << endl;
    cout << "Area of Circle = " << area(radius) << endl;

    return 0;
}

// Function definitions
int add(int num1, int num2)
{
    return num1 + num2;
}

void greeting(const string& msg)
{
    cout << msg << endl;
}

double area(double radius)
{
    const double pi = 3.141592653589793;
    return pi * pow(radius, 2);
}
