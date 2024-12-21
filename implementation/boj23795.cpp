#include <iostream>
using namespace std;


int money, sum;


int main()
{
    while (true) {
        cin >> money;
        if (money == -1) break;
        sum += money;
    }

    cout << sum;

    return 0;
}
