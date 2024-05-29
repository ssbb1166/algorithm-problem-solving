#include <algorithm>
#include <iostream>
using namespace std;


int n, m, arr[5000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = 9999, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        int idx = 0, cnt = 1, max_num = 1, min_num = 10000;
        while (idx < n) {
            min_num = min(min_num, arr[idx]);
            max_num = max(max_num, arr[idx]);
            if (max_num - min_num > mid) {
                cnt++;
                min_num = max_num = arr[idx++];
            }
            else {
                idx++;
            }
        }

        if (cnt <= m) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << res;

    return 0;
}
