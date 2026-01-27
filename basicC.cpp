#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

// Function to print greeting
void greeting(string message)
{
    cout << message << endl;
}

// Function to calculate area of circle
double areaOfCircle(double radius)
{
    return 3.149 * radius * radius;
}

int main()
{
    int x, y;
    double radius;
    string message;

    // Greeting message (full line input)
    cout << "Enter greeting message: ";
    getline(cin, message);          
    greeting(message);

    // Addition
    cout << "Enter two numbers: ";
    cin >> x >> y;


    cin.ignore();                   

    // Area of circle
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Sum = " << add(x, y) << endl;
    cout << "Area of Circle = " << areaOfCircle(radius) << endl;

    return 0;
}
