#include <iostream>
using namespace std;


int n, m, k;


int main()
{
    cin >> n >> m >> k;
    cout << (m < k ? n + m - k : n - m + k);

    return 0;
}
