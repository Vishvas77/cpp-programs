/*//simulate user login where user enters a password if password matches with 1989 then 
print success welcome to home page otherwise display "invalid credentials try again". 
after three unsuccessful attempts display "user is blocked thank you"*/
#include <iostream>
using namespace std;

int main ()
{
    int count=0;
    int password;
    
    while (count < 3)
    {
        cout << "Enter your password: " << endl;
        cin >> password;
        if (password==1989)
        {
            cout << "Success, Welcome to Home Page" << endl;
            return 0;
        }
    else {
        cout << "Invalid credentials try again" << endl;
    }
     count+=1;
    if(count<3)
        {
            cout << "User is blocked thank you" << endl;
        }
    return 0;
}
}




