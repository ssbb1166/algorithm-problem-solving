#include <iostream>
#include <vector>
using namespace std;


int n, p, s, e;
bool repeat;
vector<int> num;


int main()
{
    cin >> n >> p;

    num.push_back(n);

    while (!repeat) {
        num.push_back(num[e++] * n % p);
        for (int i = 0; i < e; i++) {
            if (num[i] == num[e]) {
                s = i;
                repeat = true;
            }
        }
    }

    cout << e - s;

    return 0;
}
