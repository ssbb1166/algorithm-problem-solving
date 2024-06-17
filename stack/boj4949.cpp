#include <iostream>
#include <stack>
#include <string>
using namespace std;


string str;


bool Balanced()
{
    stack<char> st;

    for (char c : str) {
        if (c == '(' || c == '[')
            st.push(c);

        if (c == ')') {
            if (st.empty() || st.top() == '[')
                return false;
            else
                st.pop();
        }

        if (c == ']') {
            if (st.empty() || st.top() == '(')
                return false;
            else
                st.pop();
        }
    }

    if (!st.empty())
        return false;

    return true;
}


int main()
{
    while (getline(cin, str)) {
        if (str == ".") break;
        cout << (Balanced() ? "yes" : "no") << '\n';
    }

    return 0;
}
