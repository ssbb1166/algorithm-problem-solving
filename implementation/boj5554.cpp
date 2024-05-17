#include <iostream>
using namespace std;


int t1, t2, t3, t4, x, y;


int main()
{
    cin >> t1 >> t2 >> t3 >> t4;

    x = (t1 + t2 + t3 + t4) / 60;
    y = (t1 + t2 + t3 + t4) % 60;

    cout << x << '\n';
    cout << y << '\n';

    return 0;
}
