#include <iostream>
using namespace std;


int t, n, m;
double x, y, dist;


int GetScore(double x, double y)
{
    int score;
    double dist = x * x + y * y;

    if (dist <= 9)
        score = 100;
    else if (dist <= 36)
        score = 80;
    else if (dist <= 81)
        score = 60;
    else if (dist <= 144)
        score = 40;
    else if (dist <= 225)
        score = 20;
    else
        score = 0;

    return score;
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        n = m = 0;

        for (int j = 0; j < 3; j++) {
            cin >> x >> y;
            n += GetScore(x, y);
        }

        for (int j = 0; j < 3; j++) {
            cin >> x >> y;
            m += GetScore(x, y);
        }

        if (n > m)
            cout << "SCORE: " << n << " to " << m << ", PLAYER " << 1 << " WINS.\n";
        else if (n < m)
            cout << "SCORE: " << n << " to " << m << ", PLAYER " << 2 << " WINS.\n";
        else
            cout << "SCORE: " << n << " to " << m << ", TIE.\n";
    }

    return 0;
}
