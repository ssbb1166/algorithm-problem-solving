#include <iostream>
using namespace std;


int t, n, num[100];
long long sum;


int GCD(int a, int b)
{
    int c;
    while (b > 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> num[i];

        sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                sum += GCD(num[i], num[j]);

        cout << sum << '\n';
    }

    return 0;
}
