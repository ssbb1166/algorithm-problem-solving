#include <iostream>
using namespace std;


int n, cnt, board[15];


bool IsPossible(int row)
{
    for (int i = 0; i < row; i++)
        if (board[row] == board[i] || row - i == abs(board[row] - board[i]))
            return false;

    return true;
}


void NQueen(int row)
{
    if (row == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) {
        board[row] = i;
        if (IsPossible(row))
            NQueen(row + 1);
    }
}


int main()
{
    cin >> n;

    NQueen(0);

    cout << cnt << '\n';

    return 0;
}
