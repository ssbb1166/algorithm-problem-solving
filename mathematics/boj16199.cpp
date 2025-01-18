#include <iostream>
using namespace std;


int by, bm, bd, ty, tm, td;


int main()
{
    cin >> by >> bm >> bd >> ty >> tm >> td;

    cout << (tm > bm || tm == bm && td >= bd ? ty - by : ty - by - 1) << '\n';
    cout << ty - by + 1 << '\n';
    cout << ty - by;

    return 0;
}
