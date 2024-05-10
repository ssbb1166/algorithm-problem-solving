#include <algorithm>
#include <iostream>
using namespace std;


int side[3];


int main()
{
    cin >> side[0] >> side[1] >> side[2];

    sort(side, side + 3);

    if (side[0] + side[1] > side[2])
        cout << side[0] + side[1] + side[2] << '\n';
    else
        cout << (side[0] + side[1]) * 2 - 1 << '\n';

    return 0;
}
