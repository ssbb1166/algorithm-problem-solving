#include <algorithm>
#include <iostream>
using namespace std;


int num[5], sum, avg, mid;


int main()
{
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        sum += num[i];
    }

    sort(num, num + 5);

    avg = sum / 5;
    mid = num[2];

    cout << avg << '\n';
    cout << mid << '\n';

    return 0;
}
