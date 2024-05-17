#include <iostream>
using namespace std;


int n, m, k;


int main()
{
    cin >> n >> m >> k;

    while (k > 0) {
        n / 2 >= m ? n-- : m--;
        k--;
    }

    cout << (n / 2 >= m ? m : n / 2) << '\n';

    return 0;
}
