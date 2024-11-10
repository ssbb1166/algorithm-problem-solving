#include <iostream>
using namespace std;


int cash, jcash, scash, jcnt, scnt, increase, decrease, price[15];


int main()
{
    cin >> cash;

    jcash = scash = cash;
    for (int day = 1; day <= 14; day++) {
        cin >> price[day];

        jcnt += jcash / price[day];
        jcash = jcash % price[day];

        increase = day && price[day] > price[day - 1] ? increase + 1 : 0;
        decrease = day && price[day] < price[day - 1] ? decrease + 1 : 0;

        if (increase >= 3) {
            scash += price[day] * scnt;
            scnt = 0;
        }

        if (decrease >= 3) {
            scnt += scash / price[day];
            scash = scash % price[day];
        }
    }

    jcash += price[14] * jcnt;
    scash += price[14] * scnt;

    if (jcash > scash)
        cout << "BNP";
    else if (jcash < scash)
        cout << "TIMING";
    else
        cout << "SAMESAME";

    return 0;
}
