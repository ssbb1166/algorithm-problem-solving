#include <iostream>
using namespace std;


int d, k, ac[31], bc[31];


int main()
{
    cin >> d >> k;

    ac[1] = bc[2] = 1;

    for (int i = 3; i <= d; i++) {
        ac[i] = ac[i - 1] + ac[i - 2];
        bc[i] = bc[i - 1] + bc[i - 2];
    }

    for (int a = 1; a <= k; a++) {
        int rest = k - (ac[d] * a);
        if (rest % bc[d] == 0) {
            cout << a << '\n' << rest / bc[d];
            break;
        }
    }

    return 0;
}
