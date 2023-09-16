#include <iostream>
#define PI 3.141592
using namespace std;


int d1, d2;


int main()
{
    cin >> d1 >> d2;

    cout << fixed;
    cout.precision(6);
    cout << 2 * d1 + 2 * PI * d2 << '\n';

    return 0;
}
