#include <cstring>
#include <iostream>
#include <string>
using namespace std;


string s, p;


int main()
{
    cin >> s >> p;

    if (strstr(s.c_str(), p.c_str()) != NULL)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}
