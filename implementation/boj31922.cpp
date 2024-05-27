#include <iostream>
using namespace std;


int a, p, c;


int main()
{
    cin >> a >> p >> c;

    if (a + c < p)
        cout << p;
    else
        cout << a + c;

    return 0;
}
