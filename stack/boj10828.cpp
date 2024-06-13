#include <iostream>
#include <stack>
#include <string>
using namespace std;


int n, x;
string cmd;
stack<int> st;


int main()
{
    cin >> n;

    while (n--) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            st.push(x);
        }
        if (cmd == "pop") {
            cout << (!st.empty() ? st.top() : -1) << '\n';
            if (!st.empty()) st.pop();
        }
        if (cmd == "size")
            cout << st.size() << '\n';
        if (cmd == "empty")
            cout << st.empty() << '\n';
        if (cmd == "top")
            cout << (!st.empty() ? st.top() : -1) << '\n';
    }

    return 0;
}
