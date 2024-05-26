#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n;
long long int geunsu, score;
string s;
vector<int> cnts;


int main()
{
    cin >> n >> s;

    int cnt = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == '2') {
            cnt++;
        }
        else {
            cnts.push_back(cnt);
            cnt = 0;
        }
    }

    for (int cnt : cnts) {
        geunsu = 0;
        for (long long int i = 1; i <= cnt; i++)
            geunsu += i * (cnt - i + 1);
        score += geunsu;
    }

    cout << score << '\n';

    return 0;
}
