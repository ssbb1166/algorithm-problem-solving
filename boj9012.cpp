#include <iostream>
#include <stack>
#include <string>
using namespace std;


int t;
string s;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        stack<int> st;
        bool vps = true;

        cin >> s;

        for (int j = 0; j < s.size(); j++) {
            if (s[j] == '(')
                st.push('(');
            if (s[j] == ')') {
                if (st.empty())
                    vps = false;
                else
                    st.pop();
            }
        }

        if (!st.empty())
            vps = false;

        if (vps)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
