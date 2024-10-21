#include <iostream>
using namespace std;


int t, k, num[46];


bool IsPossible(int sum)
{
    for (int i = 1; i <= 45; i++)
        for (int j = 1; j <= 45; j++)
            for (int k = 1; k <= 45; k++)
                if (num[i] + num[j] + num[k] == sum)
                    return true;

    return false;
}


int main()
{
    for (int i = 1; i <= 45; i++)
        num[i] = num[i - 1] + i;

    cin >> t;

    while (t--) {
        cin >> k;
        cout << IsPossible(k) << '\n';
    }

    return 0;
}
