#include <iostream>
#include <string>
#define M 1234567891
using namespace std;


int l, a;
long long int h, r = 1;
string str;


int main()
{
    cin >> l >> str;

    for (int i = 0; i < l; i++) {
        a = str[i] - 'a' + 1;
        h = (h + a * r) % M;
        r = (r * 31) % M;
    }

    cout << h << '\n';

    return 0;
}
