#include <algorithm>
#include <iostream>
using namespace std;


int dice[3];


int main()
{
    for (int i = 0; i < 3; i++)
        cin >> dice[i];

    sort(dice, dice + 3);

    if (dice[0] == dice[2])
        cout << 10000 + dice[0] * 1000;
    else if (dice[0] == dice[1] || dice[1] == dice[2])
        cout << 1000 + dice[1] * 100;
    else
        cout << dice[2] * 100;

    return 0;
}
