#include <iostream>
#include <string>
using namespace std;


int cnt[2];
string taebo;
bool is_left = true;


int main()
{
    cin >> taebo;

    for (int i = 0; i < taebo.length(); i++) {
        if (taebo[i] == '0') is_left = false;
        if (taebo[i] == '@') is_left ? cnt[0]++ : cnt[1]++;
    }

    cout << cnt[0] << ' ' << cnt[1] << '\n';

    return 0;
}
