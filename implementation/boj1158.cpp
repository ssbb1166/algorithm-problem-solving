#include <iostream>
using namespace std;


int n, k, p;
bool visited[5001];


int main()
{
    cin >> n >> k;

    cout << '<';

    for (int i = 1; i <= n; i++) {
        for (int cnt = 0; cnt < k; cnt++) {
            p++;
            if (p > n) p = 1;
            if (visited[p]) cnt--;
        }
        cout << p;
        if (i < n) cout << ", ";
        visited[p] = true;
    }

    cout << '>' << '\n';

    return 0;
}
