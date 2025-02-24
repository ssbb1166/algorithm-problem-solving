#include <iostream>
using namespace std;


int GetNumber(int num, int base)
{
    int res = 0;

    while (num) {
        res += num % base;
        num /= base;
    }

    return res;
}


int main()
{
    for (int num = 1000; num <= 9999; num++)
        if (GetNumber(num, 10) == GetNumber(num, 12) && GetNumber(num, 12) == GetNumber(num, 16))
            cout << num << '\n';

    return 0;
}
