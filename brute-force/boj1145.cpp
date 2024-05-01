#include <iostream>
using namespace std;


int n[5], mul, cnt;


int main()
{
    for (int i = 0; i < 5; i++)
        cin >> n[i];

    while (cnt < 3) {
        mul++;
        cnt = 0;
        for (int i = 0; i < 5; i++)
            if (mul % n[i] == 0)
                cnt++;
    }

    cout << mul << '\n';

    return 0;
}
