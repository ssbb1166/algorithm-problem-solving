#include <algorithm>
#include <iostream>
using namespace std;


int n, s[3];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s[0] >> s[1] >> s[2];

        sort(s, s + 3);
        
        cout << "Scenario #" << i << ":\n";
        if (s[0] * s[0] + s[1] * s[1] == s[2] * s[2])
            cout << "yes" << '\n' << '\n';
        else
            cout << "no" << '\n' << '\n';
    }

    return 0;
}
