#include <iostream>
#include <stack>
#include <string>
using namespace std;


string s;


int main()
{
    while (getline(cin, s)) {
        stack<int> st;
        bool balance = true;

        if (s == ".") break;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[')
                st.push(s[i]);
            if (s[i] == ')' || s[i] == ']') {
                if (st.empty())
                    balance = false;
                else if (st.top() == '(' && s[i] == ')')
                    st.pop();
                else if (st.top() == '[' && s[i] == ']')
                    st.pop();
                else
                    balance = false;
            }
        }

        if (!st.empty())
            balance = false;

        if (balance)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
