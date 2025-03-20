#include <algorithm>
#include <iostream>
using namespace std;


int n;
string dp[251] = { "1", "1" };


void Calculate(int i)
{
    int sum = 0;
    string a = dp[i - 1], b = dp[i - 2], c = dp[i - 2], res = "";

    while (!a.empty() || !b.empty() || !c.empty() || sum) {
        if (a != "") {
            sum += a.back() - '0';
            a.pop_back();
        }
        if (b != "") {
            sum += b.back() - '0';
            b.pop_back();
        }
        if (c != "") {
            sum += c.back() - '0';
            c.pop_back();
        }
        res.push_back((sum % 10) + '0');
        sum /= 10;
    }

    reverse(res.begin(), res.end());
    dp[i] = res;
}


int main()
{
    for (int i = 2; i <= 250; i++)
        Calculate(i);

    while (cin >> n)
        cout << dp[n] << '\n';

    return 0;
}
