#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int l,s;
    cout << "Enter Track Length: " << endl;
    cin >> l;
    cout << "Enter Total Distance: " << endl;
    cin >> s;
    while (count<s)
    {
        cout << "Driver completed : " << count + l << endl;
        count+=1;
    }
    return 0;
}
