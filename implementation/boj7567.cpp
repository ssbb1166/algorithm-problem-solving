#include <iostream>
#include <string>
using namespace std;


string str;
int height = 10;


int main()
{
    cin >> str;

    for (int i = 1; i < str.length(); i++)
        if (str[i] == str[i - 1])
            height += 5;
        else
            height += 10;

    cout << height << '\n';

    return 0;
}
