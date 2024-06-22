#include <iostream>
using namespace std;


int n, a;


int main()
{
    cin >> n >> a;
    cout << a << ' ';

    int prev = a;
    while (--n) {
        cin >> a;
        if (a <= prev)
            a *= prev / a + 1;
        cout << a << ' ';
        prev = a;
    }

    return 0;
}
