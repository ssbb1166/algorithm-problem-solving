#include <iostream>
#include <string>
using namespace std;


int t, pos;
string str;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> pos >> str;
        str.erase(pos - 1, 1);
        cout << str << '\n';
    }

    return 0;
}
