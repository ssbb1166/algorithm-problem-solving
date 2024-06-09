#include <iostream>
using namespace std;


int n, v, num, cnt[201];


int main()
{
    cin >> n;

    while (n--) {
        cin >> num;
        cnt[num + 100]++;
    }

    cin >> v;
    cout << cnt[v + 100];

    return 0;
}
