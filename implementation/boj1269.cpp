#include <iostream>
using namespace std;


int n, m, num, cnt;
bool check[100000001];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> num;
        check[num] = !check[num];
    }

    for (int i = 0; i < m; i++) {
        cin >> num;
        check[num] = !check[num];
    }

    for (int num = 1; num <= 100000000; num++)
        cnt += check[num];

    cout << cnt;

    return 0;
}
