#include <iostream>
using namespace std;


int n, m, sum, cnt, weight[50];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> weight[i];

    for (int i = 0; i < n; i++) {
        sum += weight[i];
        if (i == n - 1 || sum + weight[i + 1] > m) {
            sum = 0;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
