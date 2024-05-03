#include <iostream>
#include <string>
using namespace std;


int cnt[26], odd;
char center;
string name;


int main()
{
    cin >> name;

    for (int i = 0; i < name.length(); i++)
        cnt[name[i] - 'A']++;

    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            name[name.length() / 2] = 'A' + i;
            cnt[i]--;
            odd++;
        }
    }

    if (odd <= 1) {
        int left = 0;
        int right = name.length() - 1;
        for (int i = 0; i < 26; i++) {
            while (cnt[i] > 1) {
                name[left++] = 'A' + i;
                name[right--] = 'A' + i;
                cnt[i] -= 2;
            }
        }
        cout << name << '\n';
    }
    else {
        cout << "I'm Sorry Hansoo" << '\n';
    }

    return 0;
}
