#include <iostream>
using namespace std;


int t, n, sum, winner, max_votes, max_cnt, votes[11];


void Initialize(int n)
{
    sum = max_votes = max_cnt = 0;

    for (int num = 1; num <= n; num++)
        votes[num] = 0;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        Initialize(n);

        for (int num = 1; num <= n; num++) {
            cin >> votes[num];
            sum += votes[num];
            max_votes = max(max_votes, votes[num]);
        }

        for (int num = 1; num <= n; num++) {
            if (votes[num] == max_votes) {
                winner = num;
                max_cnt++;
            }
        }

        if (max_cnt > 1)
            cout << "no winner" << '\n';
        else if (max_votes > sum / 2)
            cout << "majority winner " << winner << '\n';
        else
            cout << "minority winner " << winner << '\n';
    }

    return 0;
}
