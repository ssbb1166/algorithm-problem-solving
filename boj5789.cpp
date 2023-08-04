#include <iostream>
#include <string>
using namespace std;


int n;
char idx;
string str;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        idx = str.length() / 2;
        if (str[idx - 1] == str[idx])
            cout << "Do-it" << '\n';
        else
            cout << "Do-it-Not" << '\n';
    }

    return 0;
}
