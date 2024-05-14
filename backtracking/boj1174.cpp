#include <iostream>
#include <vector>
using namespace std;


int n, num[10];
vector<long long int> res;


void CountDecreasingNumber(int digits, int idx, int prev)
{
    if (idx == digits) {
        long long int times = 1;
        long long int decreasing_num = 0;
        for (int i = digits - 1; i >= 0; i--) {
            decreasing_num += num[i] * times;
            times *= 10;
        }
        res.push_back(decreasing_num);
        return;
    }

    for (int i = 0; i <= 9; i++) {
        if (i == 0 && idx == 0)
            continue;
        if (prev > i) {
            num[idx] = i;
            CountDecreasingNumber(digits, idx + 1, num[idx]);
        }
    }
}


int main()
{
    cin >> n;

    res.push_back(0);

    for (int digits = 1; digits <= 10; digits++)
        CountDecreasingNumber(digits, 0, 10);

    if (n <= res.size())
        cout << res[n - 1] << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
