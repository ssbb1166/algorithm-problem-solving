#include <iostream>
using namespace std;


int sum, price;


int main()
{
    cin >> sum;

    for (int i = 0; i < 9; i++) {
        cin >> price;
        sum -= price;
    }

    cout << sum << '\n';

    return 0;
}
