#include <iostream>
#include <string>
using namespace std;


int sec;
string tel;


int main()
{
    cin >> tel;

    for (int i = 0; i < tel.length(); i++) {
        if (tel[i] >= 'P' && tel[i] <= 'S')
            sec += 8;
        else if (tel[i] >= 'T' && tel[i] <= 'V')
            sec += 9;
        else if (tel[i] >= 'W' && tel[i] <= 'Z')
            sec += 10;
        else
            sec += (tel[i] - 56) / 3;
    }

    cout << sec << '\n';

    return 0;
}
