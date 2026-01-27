#include <iostream>
using namespace std;

class gcd
{
public:
    int pnum, qnum;

    // Constructor
    gcd(int a, int b)
    {
        pnum = a;
        qnum = b;
    }

    // Member function to calculate GCD
    int calculateGCD()
    {
        int a = pnum;
        int b = qnum;

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main()
{
    int a, b;
    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;

    gcd obj(a, b);              // object created
    int result = obj.calculateGCD(); // behavior called

    cout << "GCD is: " << result << endl;
    return 0;
}
