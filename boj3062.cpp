#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int t, len;
bool symmetry;
string n, reverse_n, sum;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        reverse_n = n;
        reverse(reverse_n.begin(), reverse_n.end());
        sum = to_string(stoi(n) + stoi(reverse_n));

        symmetry = true;
        len = sum.length();
        for (int j = 0; j < len / 2; j++)
            if (sum[j] != sum[len - j - 1])
                symmetry = false;

        if (symmetry)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
