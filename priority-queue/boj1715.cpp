#include <iostream>
#include <queue>
using namespace std;


int n, card, a, b, cnt;
priority_queue<int, vector<int>, greater<int>> cards;


int main()
{
    cin >> n;

    while (n--) {
        cin >> card;
        cards.push(card);
    }

    while (cards.size() > 1) {
        a = cards.top(); cards.pop();
        b = cards.top(); cards.pop();
        cnt += a + b;
        cards.push(a + b);
    }

    cout << cnt;

    return 0;
}
