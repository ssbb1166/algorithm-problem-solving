#include <iostream>
#include <string>
using namespace std;


int n;
string k;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        if ((k[k.length() - 1] - '0') % 2)
            cout << "odd" << '\n';
        else
            cout << "even" << '\n';
    }

    return 0;
}
