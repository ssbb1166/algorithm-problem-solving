#include <iostream>
using namespace std;


int n, num, sum;


int main()
{
    cin >> n;

    while (n--) {
        cin >> num;
        sum += num;
    }

    cout << sum;

    return 0;
}
