#include <iostream>
#include <string>
using namespace std;


int n, cnt[2];
string name;


int main()
{
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, name);

        cnt[0] = cnt[1] = 0;
        for (int j = 0; j < name.length(); j++) {
            if (name[j] == 'G' || name[j] == 'g') cnt[0]++;
            if (name[j] == 'B' || name[j] == 'b') cnt[1]++;
        }

        if (cnt[0] > cnt[1])
            cout << name << " is GOOD" << '\n';
        else if (cnt[0] < cnt[1])
            cout << name << " is A BADDY" << '\n';
        else
            cout << name << " is NEUTRAL" << '\n';
    }

    return 0;
}
