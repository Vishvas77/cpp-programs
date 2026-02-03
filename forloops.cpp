//Write a program to print numbers which are multiples of 5 in the range of 125 to 225.
#include <iostream>
using namespace std;
int main() {
    // for (int i = 125; i <= 225; i += 5) {
    //     cout << i << " ";
    // }


    // int n;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // for (int i = 0; i < n; ++i) {
    //    for (int j = 0; j <= i; ++j) {
    //        cout << "* ";
    //    } cout << endl;
    // }

    int m;
    cin >> m;
    for (int i = 1; i <= m; i++) {
        if (i == 7) {
            //break; // 1 2 3 4 5 6 ... till m
            continue; // 1 2 3 4 5 6 8 9 10 ... till m
        }
        cout << i << " ";
    }
}