#include <algorithm>
#include <iostream>
using namespace std;


int side[3];


int main()
{
    while (1) {
        cin >> side[0] >> side[1] >> side[2];

        if (!side[0] && !side[1] && !side[2]) break;

        sort(side, side + 3);

        side[0] = side[0] * side[0];
        side[1] = side[1] * side[1];
        side[2] = side[2] * side[2];

        if (side[0] + side[1] == side[2])
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }

    return 0;
}
