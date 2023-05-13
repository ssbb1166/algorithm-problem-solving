#include <iostream>
#include <string>
using namespace std;


int t, a, b;
string input;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> input;
        cout << (input[0] - '0') + (input[2] - '0') << '\n';
    }

    return 0;
}
