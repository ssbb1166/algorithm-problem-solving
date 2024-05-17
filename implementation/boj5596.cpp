#include <iostream>
using namespace std;


int s[4], t[4], sum1, sum2;


int main()
{
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    cin >> t[0] >> t[1] >> t[2] >> t[3];

    sum1 = s[0] + s[1] + s[2] + s[3];
    sum2 = t[0] + t[1] + t[2] + t[3];

    if (sum1 > sum2)
        cout << sum1 << '\n';
    else
        cout << sum2 << '\n';

    return 0;
}
