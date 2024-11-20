#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int num[3];
string order;


int main()
{
    for (int i = 0; i < 3; i++)
        cin >> num[i];

    cin >> order;

    sort(num, num + 3);

    for (char n : order) {
        if (n == 'A') cout << num[0] << ' ';
        if (n == 'B') cout << num[1] << ' ';
        if (n == 'C') cout << num[2] << ' ';
    }

    return 0;
}
