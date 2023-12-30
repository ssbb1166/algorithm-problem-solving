#include <iostream>
using namespace std;


int n;
long long int factorial = 1;


int main()
{
    cin >> n;

    for (int i = n; i > 0; i--) {
        factorial *= n;
        n--;
    }

    cout << factorial << '\n';

    return 0;
}
