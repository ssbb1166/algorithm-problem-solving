#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;


int n, m, k, idx, cnt;
deque<int> dq;


int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        dq.push_back(i);

    while (m--) {
        cin >> k;

        idx = find(dq.begin(), dq.end(), k) - dq.begin();

        if (idx < dq.size() - idx) {
            while (dq.front() != k) {
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        else {
            while (dq.front() != k) {
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;
            }
        }

        dq.pop_front();
    }

    cout << cnt;

    return 0;
}
