#include <iostream>
using namespace std;


int t, hp, mp, atk, def, ehp, emp, eatk, edef, power;


int main()
{
    cin >> t;

    while (t--) {
        cin >> hp >> mp >> atk >> def >> ehp >> emp >> eatk >> edef;

        hp += ehp;
        mp += emp;
        atk += eatk;
        def += edef;

        if (hp < 1) hp = 1;
        if (mp < 1) mp = 1;
        if (atk < 0) atk = 0;

        power = 1 * hp + 5 * mp + 2 * atk + 2 * def;

        cout << power << '\n';
    }

    return 0;
}
