#include <iostream>
using namespace std;


string num;
int cnt, max_cnt;


int main()
{
    for (int i = 0; i < 3; i++) {
        cin >> num;

        cnt = max_cnt = 1;
        for (int j = 1; j < 8; j++) {
            if (num[j] == num[j - 1])
                cnt++;
            else
                cnt = 1;

            if (cnt > max_cnt)
                max_cnt = cnt;
        }

        cout << max_cnt << '\n';
    }

    return 0;
}
