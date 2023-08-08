#include <iostream>
#include <string>
using namespace std;


int n, m;
string res;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        res += to_string(n);

    if (res.length() > m)
        cout << res.substr(0, m) << '\n';
    else
        cout << res << '\n';

    return 0;
}
