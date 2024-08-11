#include <iostream>
using namespace std;


int n, sum, cnt;


int main()
{
    cin >> n;

    int start = 0, end = 0;
    while (end <= n) {
        if (sum < n) {
            sum += ++end;
        }
        else if (sum > n) {
            sum -= ++start;
        }
        else {
            cnt++;
            sum += ++end;
            sum -= ++start;
        }
    }

    cout << cnt;

    return 0;
}
