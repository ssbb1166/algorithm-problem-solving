#include <iostream>
#include <stack>
#include <string>
using namespace std;


string str;


bool Balanced()
{
    stack<char> st;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '(' || str[i] == '[')
            st.push(str[i]);

        if (str[i] == ')') {
            if (st.empty() || st.top() == '[')
                return false;
            else
                st.pop();
        }

        if (str[i] == ']') {
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
