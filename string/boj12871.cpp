#include <iostream>
#include <string>
using namespace std;


string s, t, fs, ft;


bool IsSame(string s, string t)
{
    int len = s.length() * t.length();

    while (fs.length() < len) fs += s;
    while (ft.length() < len) ft += t;

    return fs == ft;
}


int main()
{
    cin >> s >> t;
    cout << IsSame(s, t);

    return 0;
}
