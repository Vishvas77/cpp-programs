#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows for the desired pattern: ";
    cin >> n;

    // Upper part
    for(int i=0;i<n;i++){

        // Left spaces
        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        cout<<"*";

        // Middle hollow space
        if(i>0){
            for(int j=0;j<2*i-1;j++)
                cout<<" ";
            cout<<"*";
        }

        cout<<endl;
    }

    // Lower part
    for(int i=n-2;i>=0;i--){

        // Left spaces
        for(int j=0;j<n-i-1;j++)
            cout<<" ";

        cout<<"*";

        if(i>0){
            for(int j=0;j<2*i-1;j++)
                cout<<" ";
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}