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
    return 3.141592653589793 * radius * radius;
}

int main()
{
    int x, y;
    double radius;
    string message;

    // Greeting message (full line input)
    cout << "Enter greeting message: ";
    getline(cin, message);          // ✅ getline used here
    greeting(message);

    // Addition
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // IMPORTANT: clear buffer before next getline
    cin.ignore();                   // 🔥 MOST IMPORTANT LINE

    // Area of circle
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Sum = " << add(x, y) << endl;
    cout << "Area of Circle = " << areaOfCircle(radius) << endl;

    return 0;
}
