#include <iostream>
using namespace std;


int n, d, res, max_num;
int digits[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 }, num[9];
bool visited[9];


int FindNumber(int cnt)
{
    if (cnt == d) {
        res = 0;
        for (int i = 0; i < d; i++) {
            res *= d;
            res += num[i];
        }
        if (res > n) return res;
        return -1;
    }

    for (int i = 0; i < d; i++) {
        if (!visited[i]) {
            num[cnt] = i;
            if (num[0] == 0) continue;
            visited[i] = true;
            res = FindNumber(cnt + 1);
            if (res > 0) return res;
            visited[i] = false;
        }
    }

    return res;
}


int main()
{
    cin >> n >> d;

    for (int i = d - 1; i >= 0; i--) {
        max_num *= d;
        max_num += digits[i];
    }

    cout << FindNumber(0);

    return 0;
}
