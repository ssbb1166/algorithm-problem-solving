#include <iostream>
using namespace std;


int n, prev_height, lcnt, rcnt, height[50];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> height[i];

    prev_height = 0;
    for (int i = 0; i <= n - 1; i++) {
        if (height[i] > prev_height) {
            lcnt++;
            prev_height = height[i];
        }
    }

    prev_height = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (height[i] > prev_height) {
            rcnt++;
            prev_height = height[i];
        }
    }

    cout << lcnt << '\n' << rcnt;

    return 0;
}
