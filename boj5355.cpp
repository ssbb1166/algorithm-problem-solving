#include <iostream>
#include <string>
using namespace std;


int t;
double num;
string op;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> num;
        getline(cin, op);

        for (int i = 0; i < op.length(); i++) {
            switch (op[i]) {
            case '@': num *= 3; break;
            case '%': num += 5; break;
            case '#': num -= 7; break;
            }
        }

        cout << fixed;
        cout.precision(2);
        cout << num << '\n';
    }

    return 0;
}
