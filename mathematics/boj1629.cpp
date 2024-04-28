#include <iostream>
using namespace std;


int a, b, c;
long long int sub;


long long int Power(int exp)
{
    if (exp == 1) return a % c;

    sub = Power(exp / 2);

    if (exp % 2 == 0) return sub * sub % c;
    else return sub * sub % c * a % c;
}


int main()
{
    cin >> a >> b >> c;

    cout << Power(b) << '\n';

    return 0;
}
