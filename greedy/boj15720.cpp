#include <algorithm>
#include <iostream>
using namespace std;


int b, c, d, cnt, total, discount, burgers[1000], sides[1000], drinks[1000];


int main()
{
    cin >> b >> c >> d;

    for (int i = 0; i < b; i++) {
        cin >> burgers[i];
        total += burgers[i];
    }

    for (int i = 0; i < c; i++) {
        cin >> sides[i];
        total += sides[i];
    }

    for (int i = 0; i < d; i++) {
        cin >> drinks[i];
        total += drinks[i];
    }

    discount = total;
    cnt = min(min(b, c), d);
    sort(burgers, burgers + b, greater<int>());
    sort(sides, sides + c, greater<int>());
    sort(drinks, drinks + d, greater<int>());

    for (int i = 0; i < cnt; i++) {
        discount -= burgers[i] / 10;
        discount -= sides[i] / 10;
        discount -= drinks[i] / 10;
    }

    cout << total << '\n' << discount;

    return 0;
}
