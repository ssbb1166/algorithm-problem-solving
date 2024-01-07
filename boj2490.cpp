#include <iostream>
using namespace std;


int state, cnt;
char res[5] = { 'D', 'C', 'B', 'A', 'E' };


int main()
{
    for (int i = 0; i < 3; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            cin >> state;
            if (state) cnt++;
        }
        cout << res[cnt] << '\n';
    }

    return 0;
}
