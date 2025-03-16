#include <iostream>
using namespace std;


int k, d, a;
char slash;


int main()
{
    cin >> k >> slash >> d >> slash >> a;
    cout << (k + a < d || d == 0 ? "hasu" : "gosu");

    return 0;
}
