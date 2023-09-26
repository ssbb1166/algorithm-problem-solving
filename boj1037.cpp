#include <algorithm>
#include <iostream>
using namespace std;


int cnt, divisor[50];


int main()
{
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
        cin >> divisor[i];

    sort(divisor, divisor + cnt);

    cout << divisor[0] * divisor[cnt - 1] << '\n';

    return 0;
}
