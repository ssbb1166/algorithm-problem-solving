#include <iostream>
#include <string>
using namespace std;


int cnt[4];
string str;


int main()
{
    while (getline(cin, str)) {
        cnt[0] = cnt[1] = cnt[2] = cnt[3] = 0;
        for (int j = 0; j < str.size(); j++) {
            if (str[j] >= 'a' && str[j] <= 'z')
                cnt[0]++;
            if (str[j] >= 'A' && str[j] <= 'Z')
                cnt[1]++;
            if (str[j] >= '0' && str[j] <= '9')
                cnt[2]++;
            if (str[j] == ' ')
                cnt[3]++;
        }
        cout << cnt[0] << ' ';
        cout << cnt[1] << ' ';
        cout << cnt[2] << ' ';
        cout << cnt[3] << '\n';
    }

    return 0;
}
