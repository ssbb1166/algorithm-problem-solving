#include <iostream>
#include <vector>
using namespace std;


int a, p, cnt, sum;
vector<int> d;


int main()
{
    cin >> a >> p;

    while (cnt == d.size()) {
        d.push_back(a);

        sum = 0;
        while (a > 0) {
            int mul = 1;
            int digit = a % 10;
            for (int i = 0; i < p; i++)
                mul *= digit;
            sum += mul;
            a /= 10;
        }

        cnt = 0;
        for (int num : d) {
            if (num == sum) break;
            cnt++;
        }

        a = sum;
    }

    cout << cnt;

    return 0;
}
