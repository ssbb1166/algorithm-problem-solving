#include <iostream>
using namespace std;


int ascore, bscore, a[10], b[10];
char winner = 'D';


int main()
{
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) {
            ascore += 3;
            winner = 'A';
        }
        else if (a[i] < b[i]) {
            bscore += 3;
            winner = 'B';
        }
        else {
            ascore += 1;
            bscore += 1;
        }
    }

    if (ascore > bscore) winner = 'A';
    if (ascore < bscore) winner = 'B';

    cout << ascore << ' ' << bscore << '\n' << winner;

    return 0;
}
