#include <algorithm>
#include <iostream>
using namespace std;


int n, k, res, arr[100000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    for (int i = 0; i < k; i++)
        cin >> arr[i];

    sort(arr, arr + k);

    if (arr[0] == 0) {
        int cnt_front = 1, cnt_back = 0;
        bool use_blank_paper = false;
        for (int i = 2; i < k; i++) {
            if (!use_blank_paper && arr[i] == arr[i - 1] + 1) {
                cnt_front++;
            }
            else if (!use_blank_paper && arr[i] == arr[i - 1] + 2) {
                use_blank_paper = true;
                cnt_back++;
            }
            else if (use_blank_paper && arr[i] == arr[i - 1] + 1) {
                cnt_back++;
            }
            else if (use_blank_paper && arr[i] == arr[i - 1] + 2) {
                res = max(res, cnt_front + cnt_back + 1);
                cnt_front = cnt_back;
                cnt_back = 1;
            }
            else {
                res = max(res, cnt_front + cnt_back + (use_blank_paper ? 1 : 0));
                cnt_front = 1;
                cnt_back = 0;
                use_blank_paper = false;
            }
        }
        res = max(res, cnt_front + cnt_back + (use_blank_paper ? 1 : 0));
    }
    else {
        int cnt = 1;
        for (int i = 1; i < k; i++) {
            if (arr[i] == arr[i - 1] + 1) {
                cnt++;
            }
            else {
                res = max(res, cnt);
                cnt = 1;
            }
        }
        res = max(res, cnt);
    }

    cout << res;

    return 0;
}
