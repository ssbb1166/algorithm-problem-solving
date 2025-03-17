#include <iostream>
#include <stack>
using namespace std;


int n, x, cmd;
stack<int> st;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    while (n--) {
        cin >> cmd;

        switch (cmd) {
        case 1:
            cin >> x;
            st.push(x);
            break;
        case 2:
            cout << (!st.empty() ? st.top() : -1) << '\n';
            if (!st.empty()) st.pop();
            break;
        case 3:
            cout << st.size() << '\n';
            break;
        case 4:
            cout << (!st.empty() ? 0 : 1) << '\n';
            break;
        case 5:
            cout << (!st.empty() ? st.top() : -1) << '\n';
            break;
        }
    }

    return 0;
}
