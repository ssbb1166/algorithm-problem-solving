#include <iostream>
#include <string>
using namespace std;


int cnt;
string line;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (getline(cin, line)) cnt++;

    cout << cnt;

    return 0;
}
