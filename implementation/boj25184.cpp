#include <iostream>
using namespace std;


int n, num;


int main()
{
    cin >> n;

    num = n >> 1;
    for (int i = 0; i < n; i++) {
        cout << (num ? num : n) << ' ';
        if (num <= (n >> 1))
            num += (n >> 1);
        else
            num -= (n >> 1) + 1;
    }

    return 0;
}
