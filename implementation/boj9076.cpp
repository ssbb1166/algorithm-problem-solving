#include <algorithm>
#include <iostream>
using namespace std;


int t, n[5];


int main()
{
    cin >> t;

    while (t--) {
        for (int i = 0; i < 5; i++)
            cin >> n[i];

        sort(n, n + 5);

        if (n[3] - n[1] < 4)
            cout << n[1] + n[2] + n[3] << '\n';
        else
            cout << "KIN" << '\n';
    }

    return 0;
}
