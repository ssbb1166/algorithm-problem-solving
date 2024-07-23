#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;


int t, n, x[12];
vector<int> numbers;
set<vector<int>, greater<>> res;


void FindSums(int idx, int cnt, int sum)
{
    if (cnt == n + 1) return;

    if (sum == t) {
        res.insert(numbers);
        return;
    }

    for (int i = idx; i < n; i++) {
        numbers.push_back(x[i]);
        FindSums(i + 1, cnt + 1, sum + x[i]);
        numbers.pop_back();
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> t >> n) {
        if (t == 0 && n == 0) break;

        for (int i = 0; i < n; i++)
            cin >> x[i];

        res.clear();
        FindSums(0, 0, 0);

        cout << "Sums of " << t << ":" << '\n';
        if (!res.empty())
            for (vector<int> numbers : res) {
                for (int i = 0; i < numbers.size() - 1; i++)
                    cout << numbers[i] << '+';
                cout << numbers[numbers.size() - 1] << '\n';
            }
        else
            cout << "NONE" << '\n';
    }

    return 0;
}
