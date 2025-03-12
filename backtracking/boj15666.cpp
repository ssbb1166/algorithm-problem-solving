#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, num, seq[8];
vector<int> a;


void FindSequence(int cnt, int idx)
{
    if (cnt == m) {
        for (int i = 0; i < m; i++)
            cout << seq[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = idx; i < n; i++) {
        seq[cnt] = a[i];
        FindSequence(cnt + 1, i);
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    n = a.size();
    FindSequence(0, 0);

    return 0;
}
