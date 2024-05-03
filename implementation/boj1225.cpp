#include <iostream>
#include <string>
using namespace std;


string a, b;
long long int sum;


int main()
{
    cin >> a >> b;

    for (int i = 0; i < a.length(); i++)
        for (int j = 0; j < b.length(); j++)
            sum += (a[i] - '0') * (b[j] - '0');

    cout << sum << '\n';

    return 0;
}
