#include <iostream>
#include <string>
using namespace std;


int cnt;
string board, res;


int main()
{
    cin >> board;

    for (int i = 0; i <= board.length(); i++) {
        if (board[i] == 'X') {
            cnt++;
        }
        else {
            if (cnt % 2 == 0) {
                for (int j = 0; j < cnt / 4; j++)
                    res += "AAAA";
                for (int j = 0; j < cnt % 4; j++)
                    res += "B";
                cnt = 0;
            }
            else {
                res = "-1";
                break;
            }

            if (i < board.length())
                res += '.';
        }
    }

    cout << res << '\n';

    return 0;
}
