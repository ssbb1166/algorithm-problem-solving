#include <algorithm>
#include <iostream>
using namespace std;


int k, n, gap, score[50];


int main()
{
    cin >> k;

    for (int x = 1; x <= k; x++) {
        cin >> n;

        for (int i = 0; i < n; i++)
            cin >> score[i];

        sort(score, score + n);

        gap = 0;
        for (int i = 1; i < n; i++)
            gap = max(gap, score[i] - score[i - 1]);

        cout << "Class " << x << '\n';
        cout << "Max " << score[n - 1] << ", Min " << score[0] << ", Largest gap " << gap << '\n';
    }

    return 0;
}
