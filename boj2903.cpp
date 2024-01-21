#include <iostream>
using namespace std;


int n, x = 2;


int main()
{
    cin >> n;

    while (n > 0) {
        x += x - 1;
        n--;
    }

    cout << x * x << '\n';

    return 0;
}
