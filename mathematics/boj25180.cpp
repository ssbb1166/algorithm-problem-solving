#include <iostream>
using namespace std;


int n, digits;


int main()
{
    cin >> n;

    digits = (n - 1) / 9 + 1;

    if (digits % 2 == 1)
        cout << digits;

    if (digits % 2 == 0)
        cout << (n % 2 == 0 ? digits : digits + 1);

    return 0;
}
