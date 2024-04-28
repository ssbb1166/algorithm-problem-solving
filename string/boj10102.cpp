#include <iostream>
#include <string>
using namespace std;


int v, cnt[2];
string vote;


int main()
{
    cin >> v >> vote;

    for (int i = 0; i < v; i++)
        cnt[vote[i] - 'A']++;

    if (cnt[0] > cnt[1])
        cout << "A" << '\n';
    else if (cnt[0] < cnt[1])
        cout << "B" << '\n';
    else
        cout << "Tie" << '\n';

    return 0;
}
