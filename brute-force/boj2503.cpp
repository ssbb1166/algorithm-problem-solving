#include <iostream>
#include <string>
using namespace std;


int n, strike, ball, cnt;
bool possible[1000];
string num;


int main()
{
    cin >> n;

    for (char i = 1; i <= 9; i++) {
        for (char j = 1; j <= 9; j++) {
            for (char k = 1; k <= 9; k++) {
                if (i == j || j == k || k == i) continue;
                possible[i * 100 + j * 10 + k] = true;
            }
        }
    }

    while (n--) {
        cin >> num >> strike >> ball;
        for (char i = 1; i <= 9; i++) {
            for (char j = 1; j <= 9; j++) {
                for (char k = 1; k <= 9; k++) {
                    if (i == j || j == k || k == i) continue;

                    int s = 0, b = 0;
                    string res = to_string(i * 100 + j * 10 + k);

                    if (num[0] == res[0]) s++;
                    if (num[1] == res[1]) s++;
                    if (num[2] == res[2]) s++;
                    if (num[0] == res[1] || num[0] == res[2]) b++;
                    if (num[1] == res[0] || num[1] == res[2]) b++;
                    if (num[2] == res[0] || num[2] == res[1]) b++;

                    if (s != strike || b != ball) possible[stoi(res)] = false;
                }
            }
        }
    }

    for (int i = 1; i < 1000; i++)
        if (possible[i]) cnt++;

    cout << cnt;

    return 0;
}
