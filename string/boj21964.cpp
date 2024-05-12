#include <iostream>
#include <string>
using namespace std;


int n, len;
string s;


int main()
{
    cin >> n >> s;

    cout << s.substr(s.length() - 5, 5) << '\n';

    return 0;
}
