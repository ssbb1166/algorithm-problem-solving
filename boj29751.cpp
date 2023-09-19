#include <iostream>
using namespace std;


int w, h;


int main()
{
    cin >> w >> h;

    cout << fixed;
    cout.precision(1);
    cout << w * h / 2.0 << '\n';

    return 0;
}
