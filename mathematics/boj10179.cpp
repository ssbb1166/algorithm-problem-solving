#include <iostream>
using namespace std;


int n;
double price;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> price;
        cout << fixed;
        cout.precision(2);
        cout << "$" << price * 0.8 << '\n';
    }

    return 0;
}
