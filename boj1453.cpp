#include <iostream>
using namespace std;


int n, num, cnt;
bool seat[101];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        if (seat[num]) cnt++;
        else seat[num] = true;
    }

    cout << cnt << '\n';

    return 0;
}
