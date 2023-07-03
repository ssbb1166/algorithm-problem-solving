#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


string x, y, res;


int main()
{
    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    res = to_string(stoi(x) + stoi(y));
    reverse(res.begin(), res.end());

    cout << stoi(res) << '\n';

    return 0;
}
