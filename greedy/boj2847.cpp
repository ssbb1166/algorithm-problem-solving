#include <iostream>
using namespace std;


int n, cnt, score[101];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> score[i];

    for (int i = n - 1; i > 0; i--) {
        if (score[i] >= score[i + 1]) {
            cnt += score[i] - score[i + 1] + 1;
            score[i] = score[i + 1] - 1;
        }
    }

    cout << cnt << '\n';

    return 0;
}
