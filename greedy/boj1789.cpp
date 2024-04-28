#include <iostream>
using namespace std;


unsigned int s, n;


int main()
{
    cin >> s;

    for (n = 1; s > n * 2; n++) s -= n;

    cout << n << '\n';

    return 0;
}
