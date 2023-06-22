#include <iostream>
#include <string>
using namespace std;


string a, b, c, d;
long long int ab, cd;


int main()
{
    cin >> a >> b >> c >> d;

    ab = stoll(a + b);
    cd = stoll(c + d);

    cout << ab + cd << '\n';

    return 0;
}
