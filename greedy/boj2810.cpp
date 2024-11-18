#include <iostream>
#include <string>
using namespace std;


int n, cnt, res;
string seats;


int main()
{
    cin >> n >> seats;

    cnt = seats.length();

    for (char seat : seats)
        if (seat == 'S') res++;

    res += (cnt - res) / 2 + 1;

    cout << (res > cnt ? cnt : res);

    return 0;
}
