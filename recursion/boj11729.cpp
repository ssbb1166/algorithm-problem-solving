#include <iostream>
using namespace std;


int n;


void Hanoi(int n, int a, int b)
{
    if (n == 1) {
        cout << a << ' ' << b << '\n';
        return;
    }

    Hanoi(n - 1, a, 6 - (a + b));
    cout << a << ' ' << b << '\n';
    Hanoi(n - 1, 6 - (a + b), b);
}


int main()
{
    cin >> n;
    cout << (1 << n) - 1 << '\n';

    Hanoi(n, 1, 3);

    return 0;
}
