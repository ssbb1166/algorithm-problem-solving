#include <iostream>
using namespace std;


int n, k = 1, t;


int main()
{
    cin >> n;

    while (n > 0) {
        if (n < k) k = 1;
        n -= k++;
        t++;
    }

    cout << t;

    return 0;
}
