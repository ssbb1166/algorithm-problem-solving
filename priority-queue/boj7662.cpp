#include <iostream>
#include <map>
#include <queue>
using namespace std;


char op;
int t, k, n;
map<int, int> cnt;
priority_queue<int> max_q;
priority_queue<int, vector<int>, greater<int>> min_q;


int main()
{
    cin >> t;

    while (t--) {
        cnt.clear();
        while (!max_q.empty()) max_q.pop();
        while (!min_q.empty()) min_q.pop();

        cin >> k;

        while (k--) {
            cin >> op >> n;
            switch (op) {
            case 'I':
                max_q.push(n);
                min_q.push(n);
                cnt[n]++;
                break;
            case 'D':
                if (n == 1 && !max_q.empty()) {
                    cnt[max_q.top()]--;
                    max_q.pop();
                }
                if (n == -1 && !min_q.empty()) {
                    cnt[min_q.top()]--;
                    min_q.pop();
                }
                break;
            }
            while (!min_q.empty() && cnt[min_q.top()] == 0)
                min_q.pop();
            while (!max_q.empty() && cnt[max_q.top()] == 0)
                max_q.pop();
        }

        if (!max_q.empty() && !min_q.empty())
            cout << max_q.top() << ' ' << min_q.top() << '\n';
        else
            cout << "EMPTY" << '\n';
    }

    return 0;
}
