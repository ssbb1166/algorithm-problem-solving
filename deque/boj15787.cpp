#include <deque>
#include <iostream>
#include <set>
using namespace std;


int n, m, cmd, i, x;
deque<bool> train[100000];
set<deque<bool>> states;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        train[i].assign(20, false);

    while (m--) {
        cin >> cmd >> i;

        switch (cmd) {
        case 1:
            cin >> x;
            train[i - 1][x - 1] = true;
            break;
        case 2:
            cin >> x;
            train[i - 1][x - 1] = false;
            break;
        case 3:
            train[i - 1].pop_back();
            train[i - 1].push_front(false);
            break;
        case 4:
            train[i - 1].pop_front();
            train[i - 1].push_back(false);
            break;
        }
    }

    for (int i = 0; i < n; i++)
        states.insert(train[i]);

    cout << states.size();

    return 0;
}
