#include <iostream>
#include <stack>
#include <string>
using namespace std;


int t;
string str;


bool VPS()
{
    stack<char> st;
    for (char c : str) {
        if (c == '(')
            st.push(c);
        else if (!st.empty() && st.top() == '(')
            st.pop();
        else
            return false;
    }

    if (!st.empty())
        return false;
    
    return true;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> str;
        cout << (VPS() ? "YES" : "NO") << '\n';
    }

    return 0;
}
