#include <iostream>
#include <stack>
#include <string>
using namespace std;


string str;
stack<char> st;


int Calculate()
{
    int num = 1, sum = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '(') {
            num *= 2;
            st.push('(');
        }

        if (str[i] == '[') {
            num *= 3;
            st.push('[');
        }

        if (str[i] == ')') {
            if (st.empty() || st.top() != '(')
                return 0;
            if (str[i - 1] == '(')
                sum += num;
            st.pop();
            num /= 2;
        }

        if (str[i] == ']') {
            if (st.empty() || st.top() != '[')
                return 0;
            if (str[i - 1] == '[')
                sum += num;
            st.pop();
            num /= 3;
        }
    }

    if (!st.empty())
        return 0;

    return sum;
}


int main()
{
    cin >> str;
    cout << Calculate();

    return 0;
}
