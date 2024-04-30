#include <iostream>
#include <string>
using namespace std;


string str[5];


int main()
{
    for (int i = 0; i < 5; i++)
        cin >> str[i];

    for (int j = 0; j < 15; j++)
        for (int i = 0; i < 5; i++)
            if (j < str[i].size())
                cout << str[i][j];

    return 0;
}
