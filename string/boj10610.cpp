#include <iostream>
#include <string>
using namespace std;


int digit, sum, cnt[10];
string n;


int main()
{
    cin >> n;

    for (int i = 0; i < n.size(); i++) {
        digit = n[i] - '0';
        sum += digit;
        cnt[digit]++;
    }

    if (sum % 3 == 0 && cnt[0] > 0) {
        for (digit = 9; digit >= 0; digit--) {
            while (cnt[digit]) {
                cout << digit;
                cnt[digit]--;
            }
        }
        cout << '\n';
    }
    else {
        cout << -1 << '\n';
    }

    return 0;
}
