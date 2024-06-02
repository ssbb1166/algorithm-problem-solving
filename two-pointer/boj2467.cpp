#include <iostream>
using namespace std;


int n, sum, min_sum = 2e9, value[100000], res[2];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> value[i];

    int start = 0, end = n - 1;
    while (start < end) {
        sum = value[start] + value[end];
        if (abs(sum) < min_sum) {
            min_sum = abs(sum);
            res[0] = value[start];
            res[1] = value[end];
        }
        if (sum < 0) start++;
        else end--;
    }

    cout << res[0] << ' ' << res[1];

    return 0;
}
