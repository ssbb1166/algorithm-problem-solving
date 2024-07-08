#include <iostream>
using namespace std;


int n, res[11] = { 0, 1, 2, 2, 3, 3, 3, 2, 2, 1, 1 };


int main()
{
    cin >> n;
    cout << res[n];

    return 0;
}
