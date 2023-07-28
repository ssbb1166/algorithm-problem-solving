#include <iostream>
#include <string>
using namespace std;


int cnt[2];
string str;


int main()
{
    cin >> str;

    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I')
            cnt[0]++;
        if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I')
            cnt[1]++;
    }

    cout << cnt[0] << '\n';
    cout << cnt[1] << '\n';

    return 0;
}
