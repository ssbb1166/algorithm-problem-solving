#include <iostream>
using namespace std;


int ascore, bscore, a[10], b[10];


int main()
{
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++) {
        if (a[i] > b[i]) ascore++;
        if (a[i] < b[i]) bscore++;
    }

    if (ascore > bscore)
        cout << "A";
    else if (ascore < bscore)
        cout << "B";
    else
        cout << "D";

    return 0;
}
