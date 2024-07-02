#include <iostream>
#include <string>
using namespace std;


int cnt, max_cnt;
string towers;


int main()
{
    cin >> towers;

    for (int i = 0; towers[i]; i++) {
        if (towers[i] == '0')
            cnt++;
        else
            cnt = 0;

        if (cnt > max_cnt)
            max_cnt = cnt;
    }

    cout << (max_cnt + 1) / 2;

    return 0;
}
