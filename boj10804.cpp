#include <algorithm>
#include <iostream>
using namespace std;


int a, b, card[21];


int main()
{
    for (int i = 1; i <= 20; i++)
        card[i] = i;

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(card + a, card + b + 1);
    }

    for (int i = 1; i <= 20; i++)
        cout << card[i] << ' ';

    return 0;
}
