#include <iostream>
using namespace std;


int n, dice[2], score[2] = { 100, 100 };


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> dice[0] >> dice[1];
        if (dice[0] < dice[1])
            score[0] -= dice[1];
        if (dice[0] > dice[1])
            score[1] -= dice[0];
    }

    cout << score[0] << '\n';
    cout << score[1] << '\n';

    return 0;
}
