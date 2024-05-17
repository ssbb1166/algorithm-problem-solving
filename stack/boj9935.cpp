#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;


string str, boom, res;
stack<char> st;


int main()
{
    cin >> str >> boom;

    for (int i = 0; i < str.length(); i++) {
        st.push(str[i]);

        if (str[i] == boom[boom.length() - 1] && st.size() >= boom.length()) {
            string tmp;

            for (int j = 0; j < boom.length(); j++) {
                tmp += st.top();
                st.pop();
            }

            reverse(tmp.begin(), tmp.end());

            if (tmp != boom)
                for (int j = 0; j < tmp.length(); j++)
                    st.push(tmp[j]);
        }
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());

    if (!res.empty())
        cout << res << '\n';
    else
        cout << "FRULA" << '\n';

    return 0;
}
