#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, string> students;
    students["101"] = "Ravi";
    students["102"] = "Suresh";
    students["103"] = "Kiran";

    cout << "Studenr Details: \n" << endl;
    cout << students["101"] << endl; // Ravi
    cout << students["102"] << endl; // Suresh
    cout << students["103"] << endl; // Kiran
    return 0;
}