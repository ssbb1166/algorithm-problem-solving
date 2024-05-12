#include <iostream>
using namespace std;


int val, sum;


int main()
{
    for (int i = 0; i < 6; i++) {
        cin >> val;
        sum += val;
    }

    cout << sum * 5 << '\n';

    return 0;
}
