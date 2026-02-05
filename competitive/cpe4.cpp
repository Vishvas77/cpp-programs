#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;
    //cout << count(arr, arr+n, x) << endl;
    if(find(arr, arr+n, x) != arr+n){
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

//auto
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cin >> x;

    auto y=find(arr, arr+n, x);
    if(y != arr+n){
        cout << "Element found at index: "<< y-arr << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
