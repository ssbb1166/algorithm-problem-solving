#include <cmath>
#include <iostream>
using namespace std;


int n;
long long int sum, x[10000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> x[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum += abs(x[i] - x[j]);

    cout << sum << '\n';

    return 0;
}
