#include <iostream>
#include <string>
using namespace std;


string state;
int robot, box, flag;


int main()
{
    cin >> state;

    for (int i = 0; i < 10; i++) {
        if (state[i] == '@')
            robot = i;
        if (state[i] == '#')
            box = i;
        if (state[i] == '!')
            flag = i;
    }

    if (robot < box && box < flag ||
        robot > box && box > flag)
        cout << abs(flag - robot) - 1;
    else
        cout << -1;

    return 0;
}
