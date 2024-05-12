#include <iostream>
using namespace std;


int off, on, cnt, max_cnt;


int main()
{
    for (int i = 0; i < 10; i++) {
        cin >> off >> on;
        cnt += on - off;
        if (cnt > max_cnt)
            max_cnt = cnt;
    }

    cout << max_cnt << '\n';

    return 0;
}
