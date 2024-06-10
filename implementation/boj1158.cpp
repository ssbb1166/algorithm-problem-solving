#include <iostream>
using namespace std;


int n, k, num;
bool removed[5001];


int main()
{
    cin >> n >> k;

    cout << '<';
    for (int cnt = 1; cnt <= n; cnt++) {
        for (int idx = 1; idx <= k; idx++) {
            num++;
            if (num > n) num = 1;
            if (removed[num]) idx--;
        }
        cout << num;
        if (cnt < n) cout << ", ";
        removed[num] = true;
    }
    cout << '>';

    return 0;
}
