#include <iostream>
using namespace std;


long long int a, b, tmp;


int main()
{
    cin >> a >> b;

    if (a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    
    if (a == b) {
        cout << 0 << '\n';
    }
    else {
        cout << b - a - 1 << '\n';
        for (long long int i = a + 1; i <= b - 1; i++)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}
