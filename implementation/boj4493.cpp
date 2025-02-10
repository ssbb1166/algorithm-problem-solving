#include <iostream>
using namespace std;


int t, n, score;
char player1, player2;


int GetScore(char player1, char player2)
{
    if (player1 == 'R' && player2 == 'S' ||
        player1 == 'S' && player2 == 'P' ||
        player1 == 'P' && player2 == 'R')
        return 1;

    if (player1 == 'R' && player2 == 'P' ||
        player1 == 'S' && player2 == 'R' ||
        player1 == 'P' && player2 == 'S')
        return -1;

    return 0;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        score = 0;
        while (n--) {
            cin >> player1 >> player2;
            score += GetScore(player1, player2);
        }

        if (score > 0)
            cout << "Player 1" << '\n';
        else if (score < 0)
            cout << "Player 2" << '\n';
        else
            cout << "TIE" << '\n';
    }

    return 0;
}
