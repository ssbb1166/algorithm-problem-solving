#include <iostream>
using namespace std;


int t;
long long int a, b, c, add;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        
        if (a >= b && a >= c) add = 2 * b * c;
        if (b >= a && b >= c) add = 2 * a * c;
        if (c >= a && c >= b) add = 2 * a * b;

        cout << a * a + b * b + c * c + add << '\n';
    }

    return 0;
}
