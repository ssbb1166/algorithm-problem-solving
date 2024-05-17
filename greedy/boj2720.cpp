#include <iostream>
using namespace std;


int t, c, unit[4] = { 25, 10, 5, 1 };


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> c;
        
        for (int j = 0; j < 4; j++) {
            cout << c / unit[j] << ' ';
            c %= unit[j];
        }
        cout << '\n';
    }

    return 0;
}
