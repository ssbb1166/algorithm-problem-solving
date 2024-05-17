#include <algorithm>
#include <iostream>
using namespace std;


int t, a[10];


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 10; j++)
            cin >> a[j];
        sort(a, a + 10);
        cout << a[7] << '\n';
    }

    return 0;
}
