// Dynamic Memory Allocation Example
#include <iostream>
using namespace std;

int main(){
    // single variable allocation
    int *ptr=nullptr;
    ptr = new int(47);
    cout<<"Value : "<< *ptr << endl;
    delete ptr;
    
}