// Dynamic Memory Allocation Example
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number of elements: ";
    cin >> n;

    int *ptr= NULL;
    ptr = new int[n];
    for(int i=0;i<n;i++){
        ptr[i] = i + 1;
    }
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
 return 0;
}