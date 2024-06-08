#include <iostream>
using namespace std;


int num, res, idx;


int main()
{
    for (int i = 1; i <= 9; i++) {
        cin >> num;
        if (num > res) {
            res = num;
            idx = i;
        }
    }

    cout << res << '\n' << idx;

    return 0;
}
