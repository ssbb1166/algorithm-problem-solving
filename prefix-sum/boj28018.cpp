#include <iostream>
using namespace std;


int n, s, e, q, t, premption[1000001];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        premption[s]++;
        premption[e + 1]--;
    }

    for (int i = 1; i <= 1000000; i++)
        premption[i] += premption[i - 1];

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> t;
        cout << premption[t] << '\n';
    }

    return 0;
}
