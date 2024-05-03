#include <cmath>
#include <iostream>
using namespace std;


int d, h, w;


int main()
{
    cin >> d >> h >> w;

    cout << (int)(d / sqrt(h * h + w * w) * h) << ' '
         << (int)(d / sqrt(h * h + w * w) * w) << '\n';

    return 0;
}
