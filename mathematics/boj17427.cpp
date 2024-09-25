#include <iostream>
using namespace std;


int n;
long long sum;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        sum += i * (n / i);

    cout << sum;

    return 0;
}
