#include <iostream>
#include <vector>
using namespace std;


int n, k;
vector<int> common_divisor;


int main()
{
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            common_divisor.push_back(i);

    if (common_divisor.size() < k)
        cout << 0 << '\n';
    else
        cout << common_divisor[k - 1] << '\n';

    return 0;
}
