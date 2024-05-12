#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    cout << int(n * 0.78) << ' ' << int(n * 0.8 + n * 0.2 * 0.78) << '\n';

    return 0;
}
