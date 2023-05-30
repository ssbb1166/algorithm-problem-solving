#include <iostream>
using namespace std;


int n, m, sum, max_length, length[100000];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> length[i];
        sum += length[i];
        if (length[i] > max_length)
            max_length = length[i];
    }

    int low = max_length, high = sum, res = 0;
    while (low <= high) {
        int mid = (low + high) / 2;

        int amount = 0, cnt = 1;
        for (int i = 0; i < n - 1; i++) {
            amount += length[i];
            if (amount + length[i + 1] > mid) {
                amount = 0;
                cnt++;
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
    
    cout << res << '\n';

    return 0;
}
