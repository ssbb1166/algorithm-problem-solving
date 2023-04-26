#include <iostream>
using namespace std;


int n, player1, player2;


int main()
{
    cin >> n >> player1 >> player2;

    if (player1 > player2) {
        int tmp;
        tmp = player1;
        player1 = player2;
        player2 = tmp;
    }

    for (int round = 1; player1 < player2; round++) {
        player1 = (player1 + 1) >> 1;
        player2 = (player2 + 1) >> 1;
        if (player1 == player2)
            cout << round << '\n';
    }

    return 0;
}
