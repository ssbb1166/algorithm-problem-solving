#include <iostream>
#include <string>
using namespace std;


int n, l, o, v, e, val, max_val = -1;
string name, team, res;


void Count(char c)
{
    if (c == 'L') l++;
    if (c == 'O') o++;
    if (c == 'V') v++;
    if (c == 'E') e++;
}


int main()
{
    cin >> name >> n;

    while (n--) {
        cin >> team;

        l = o = v = e = 0;
        for (char c : name) Count(c);
        for (char c : team) Count(c);

        val = ((l + o) * (l + v) * (l + e) * (o + v) * (o + e) * (v + e)) % 100;

        if (val > max_val) {
            max_val = val;
            res = team;
        }

        if (val == max_val && team < res)
            res = team;
    }

    cout << res;

    return 0;
}
