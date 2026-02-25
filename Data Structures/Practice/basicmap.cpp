#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[2] = "def";
    m[3] = "ghi";
    for(auto x : m)
    cout << x.first << " " << x.second << endl;
    return 0;
}