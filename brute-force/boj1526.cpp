#include <iostream>
using namespace std;


int n, num;


bool IsGoldNumber(int num)
{
    while (num) {
        if (num % 10 == 4 || num % 10 == 7)
            num /= 10;
        else
            return false;
    }

    return true;
}


int main()
{
    cin >> n;

    for (num = n; num >= 4; num--)
        if (IsGoldNumber(num)) break;

    cout << num;
    
    return 0;
}
