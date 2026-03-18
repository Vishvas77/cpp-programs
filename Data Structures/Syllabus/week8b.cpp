# include <iostream>
#include <stack>
#include <cctype>
#include <cmath>
using namespace std;
int evaluatepostfix(string expr)
{
    stack<int> st;
    char ch;
    for(int i=0;i<(int)expr.length();i++)
    {
        char ch = expr[i];
        if(isdigit(ch))
        {
            st.push(ch-'0'); // convert char to int
        }
        else
        {
            int value2 = st.top(); st.pop();
            int value1 = st.top(); st.pop();
            switch(ch)
            {
                case '+': st.push(value1 + value2); break;
                case '-': st.push(value1 - value2); break;
                case '*': st.push(value1 * value2); break;
                case '/': st.push(value1 / value2); break;
                case '^': st.push(pow(value1, value2)); break;
            }
        }
    }
    return st.top();
}
int main()
{
    string postfix;
    cout << "Enter Postfix Expression: ";
    cin >> postfix;
    int result = evaluatepostfix(postfix);
    cout << "Result: " << result << endl;
    return 0;
}