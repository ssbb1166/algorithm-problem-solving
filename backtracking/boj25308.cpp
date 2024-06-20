#include <iostream>
using namespace std;


int a[8], seq[8], res;
bool visited[8];


bool PossibleAngle(double a1, double a2, double a3)
{
    return (2 * a1 * a1 * a3 * a3) / ((a1 + a3) * (a1 + a3)) <= a2 * a2;
}


void CountPossibleSequence(int cnt)
{
    if (cnt == 8) {
        if (PossibleAngle(seq[7], seq[0], seq[1]) && PossibleAngle(seq[6], seq[7], seq[0])) res++;
        return;
    }

    for (int i = 0; i < 8; i++) {
        if (!visited[i]) {
            seq[cnt] = a[i];
            if (cnt >= 2 && cnt <= 7 && !PossibleAngle(seq[cnt - 2], seq[cnt - 1], seq[cnt]))
                continue;
            visited[i] = true;
            CountPossibleSequence(cnt + 1);
            visited[i] = false;
        }
    }
}


int main()
{
    for (int i = 0; i < 8; i++)
        cin >> a[i];

    CountPossibleSequence(0);

    cout << res;

    return 0;
}
