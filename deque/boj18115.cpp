#include <deque>
#include <iostream>
using namespace std;


int n, top, a[1000001];
deque<int> cards;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == 1) {
            cards.push_front(n - i);
        }
        if (a[i] == 2) {
            top = cards.front();
            cards.pop_front();
            cards.push_front(n - i);
            cards.push_front(top);
        }
        if (a[i] == 3) {
            cards.push_back(n - i);
        }
    }

    for (int card : cards)
        cout << card << ' ';

    return 0;
}
