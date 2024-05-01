#include <iostream>
#include <string>
using namespace std;


int n, cnt_under_five, cnt[26];
string name;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        cnt[name[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (cnt[i] >= 5)
            cout << (char)(i + 'a');
        else
            cnt_under_five++;
    }

    if (cnt_under_five == 26)
        cout << "PREDAJA" << '\n';

    return 0;
}
