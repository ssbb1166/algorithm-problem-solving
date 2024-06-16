#include <deque>
#include <iostream>
#include <string>
using namespace std;


int n, x;
string cmd;
deque<int> dq;


int main()
{
    cin >> n;

    while (n--) {
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
            cout << (!dq.empty() ? dq.front() : -1) << '\n';
            if (!dq.empty()) dq.pop_front();
        }
        if (cmd == "pop_back") {
            cout << (!dq.empty() ? dq.back() : -1) << '\n';
            if (!dq.empty()) dq.pop_back();
        }
        if (cmd == "size")
            cout << dq.size() << '\n';
        if (cmd == "empty")
            cout << dq.empty() << '\n';
        if (cmd == "front")
            cout << (!dq.empty() ? dq.front() : -1) << '\n';
        if (cmd == "back")
            cout << (!dq.empty() ? dq.back() : -1) << '\n';
    }

    return 0;
}
