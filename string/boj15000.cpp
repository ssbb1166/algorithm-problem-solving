#include <iostream>
#include <string>
using namespace std;


string str;


int main()
{
    cin >> str;

    for (int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);

    cout << str << '\n';

    return 0;
}
