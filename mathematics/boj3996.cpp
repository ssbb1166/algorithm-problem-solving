#include <iostream>
#include <string>
#include <vector>
using namespace std;


unsigned long long n, k, digits, cnt = 1;
vector<int> num;



int main()
{
    cin >> n >> k;

    while (n > 0) {
        num.push_back(n % k);
        n /= k;
    }
    
    int i;
    unsigned long long power = 1;
    for (i = 0; i < num.size() - 1; i += 2) {
        cnt += (k - 1) * power;
        power *= k;
    }

    if (num.size() % 2 == 1) {
        cnt += (num[i] - 1) * power;

        while (i >= 0) {
            if (i == 0 || num[i - 1] > 0) {
                cnt += power;
                break;
            }
            i -= 2;
            power /= k;
            cnt += (num[i]) * power;
        }
    }

    cout << cnt;

    return 0;
}
