#include <iostream>
using namespace std;


int a, sum;


int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> a;
        sum += a;
    }

    cout << sum << '\n';

    return 0;
}
