#include <iostream>
using namespace std;


int money, cnt;
int changes[] = { 500, 100, 50, 10, 5, 1 };


int main()
{
    cin >> money;

    money = 1000 - money;

    for (int i = 0; i < 6; i++) {
        cnt += money / changes[i];
        money = money % changes[i];
    }

    cout << cnt << '\n';

    return 0;
}
