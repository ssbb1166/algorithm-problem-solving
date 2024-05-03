#include <iostream>
#include <string>
using namespace std;


string a, b;


int main()
{
    cin >> a >> b;

    for (int i = 0; i < 100000; i++)
        cout << (a[i] - '0' & b[i] - '0');
    cout << '\n';

    for (int i = 0; i < 100000; i++)
        cout << (a[i] - '0' | b[i] - '0');
    cout << '\n';

    for (int i = 0; i < 100000; i++)
        cout << (a[i] - '0' ^ b[i] - '0');
    cout << '\n';

    for (int i = 0; i < 100000; i++)
        cout << !(a[i] - '0');
    cout << '\n';

    for (int i = 0; i < 100000; i++)
        cout << !(b[i] - '0');
    cout << '\n';

    return 0;
}
