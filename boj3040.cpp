#include <iostream>
using namespace std;


int a, b, sum, num[9];


int main()
{
    for (int i = 0; i < 9; i++) {
        cin >> num[i];
        sum += num[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sum - num[i] - num[j] == 100) {
                a = i;
                b = j;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        if (i == a || i == b)
            continue;

        cout << num[i] << '\n';
    }

    return 0;
}
