#include <iostream>
using namespace std;


int n, q, query, x, cnt;
bool infected[200001];


int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> n >> q;

    cnt = n;

    for (int i = 0; i < q; i++) {
        cin >> query;
        switch (query) {
        case 1:
            cin >> x;
            if (!infected[x]) {
                infected[x] = true;
                cnt--;
            }
            break;
        case 2:
            cin >> x;
            if (infected[x]) {
                infected[x] = false;
                cnt++;
            }
            break;
        case 3:
            cout << cnt << '\n';
        }
    }

    return 0;
}
