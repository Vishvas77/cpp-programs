#include <iostream>
using namespace std;
int trailingzeros(int n)
{
    int fact=1,count = 0;
    for (int i = 1; n / i <= n; i ++)
      fact *= i;
    while (fact % 10 == 0)    {
        count++;
        fact /= 10;
    }   
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << trailingzeros(n) << endl;
    return 0;
}