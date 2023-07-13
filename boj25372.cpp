#include <iostream>
#include <string>
using namespace std;


int n;
string password;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> password;
        if (password.length() >= 6 && password.length() <= 9)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}
