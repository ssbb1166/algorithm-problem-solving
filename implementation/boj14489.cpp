#include <iostream>
using namespace std;


int a, b, c;


int main()
{
    cin >> a >> b >> c;
    cout << (a + b >= c * 2 ? a + b - c * 2 : a + b);

    return 0;
}
