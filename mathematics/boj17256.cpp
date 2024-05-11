#include <iostream>
using namespace std;


int ax, ay, az, bx, by, bz, cx, cy, cz;


int main()
{
    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;

    bx = cx - az;
    by = cy / ay;
    bz = cz - ax;

    cout << bx << ' ' << by << ' ' << bz << '\n';

    return 0;
}
