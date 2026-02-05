//Write a program to read n, array and display the array elements by raising their value by three times
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    cout << "Initial Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        arr[i] += 3;
    } cout << endl;
    cout << *min_element(arr, arr + n) << endl;
    cout << *max_element(arr, arr + n) << endl;
    cout << accumulate(arr, arr + n, 0) << endl;
    reverse(arr, arr + n);
    sort(arr, arr + n);
    sort(arr, arr + n, greater<int>());
    cout << "Final Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } 
}