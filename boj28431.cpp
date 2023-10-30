#include <iostream>
using namespace std;


int num;
bool socks[10];


int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (!socks[num])
            socks[num] = true;
        else
            socks[num] = false;
    }

    for (int i = 0; i < 10; i++)
        if (socks[i])
            cout << i << '\n';

    return 0;
}
