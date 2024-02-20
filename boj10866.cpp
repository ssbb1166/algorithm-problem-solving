#include <deque>
#include <iostream>
using namespace std;


int n, x;
string cmd;
deque<int> dq;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push_front") {
            cin >> x;
            dq.push_front(x);
        }

        if (cmd == "push_back") {
            cin >> x;
            dq.push_back(x);
        }

        if (cmd == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else {
                cout << -1 << '\n';
            }
        }

        if (cmd == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else {
                cout << -1 << '\n';
            }
        }

        if (cmd == "size")
            cout << dq.size() << '\n';

        if (cmd == "empty")
            cout << (dq.empty() ? 1 : 0) << '\n';

        if (cmd == "front")
            cout << (!dq.empty() ? dq.front() : -1) << '\n';

        if (cmd == "back")
            cout << (!dq.empty() ? dq.back() : -1) << '\n';
    }

    return 0;
}
