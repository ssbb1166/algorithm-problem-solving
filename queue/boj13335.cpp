#include <iostream>
#include <queue>
using namespace std;


int n, w, l, sum, cnt, a[1000];
queue<int> bridge;


int main()
{
    cin >> n >> w >> l;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    while (i < n) {
        if (bridge.size() == w) {
            sum -= bridge.front();
            bridge.pop();
        }

        if (sum + a[i] <= l) {
            sum += a[i];
            bridge.push(a[i]);
            i++;
        }
        else {
            sum += 0;
            bridge.push(0);
        }

        cnt++;
    }

    cout << cnt + w;

    return 0;
}
