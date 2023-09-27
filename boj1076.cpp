#include <iostream>
using namespace std;


int val1, val2, mul = 1, res;
string color1, color2, color3;
string colors[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };


int main()
{
    cin >> color1 >> color2 >> color3;

    for (int i = 0; i <= 9; i++) {
        if (color1 == colors[i])
            val1 = i;
        if (color2 == colors[i])
            val2 = i;
        if (color3 == colors[i])
            mul = i;
    }

    res = val1 * 10 + val2;

    if (res == 0) {
        cout << 0 << '\n';
    }
    else {
        cout << res;
        for (int i = 0; i < mul; i++)
            cout << 0;
        cout << '\n';
    }

    return 0;
}
