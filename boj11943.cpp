#include <iostream>
using namespace std;


int a, b, c, d;


int main()
{
    cin >> a >> b >> c >> d;

    if (a + d < b + c)
        cout << a + d << '\n';
    else
        cout << b + c << '\n';

    return 0;
}
