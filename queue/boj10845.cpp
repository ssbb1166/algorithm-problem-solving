#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, x;
string cmd;
queue<int> q;


int main()
{
    cin >> n;

    while (n--) {
        cin >> cmd;

        if (cmd == "push") {
            cin >> x;
            q.push(x);
        }
        if (cmd == "pop") {
            cout << (!q.empty() ? q.front() : -1) << '\n';
            if (!q.empty()) q.pop();
        }
        if (cmd == "size")
            cout << q.size() << '\n';
        if (cmd == "empty")
            cout << q.empty() << '\n';
        if (cmd == "front")
            cout << (!q.empty() ? q.front() : -1) << '\n';
        if (cmd == "back")
            cout << (!q.empty() ? q.back() : -1) << '\n';
    }

    return 0;
}
