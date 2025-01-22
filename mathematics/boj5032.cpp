#include <iostream>
using namespace std;


int e, f, c, empties, cnt;


int main()
{
    cin >> e >> f >> c;

    empties = e + f;

    while (empties >= c) {
        cnt += empties / c;
        empties = empties / c + empties % c;
    }

    cout << cnt;

    return 0;
}
