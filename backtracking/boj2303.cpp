#include <iostream>
#include <vector>
using namespace std;


int n, sum, digit, max_num, max_digit, cards[5];
vector<int> selected;


void SelectCards(int num, int idx, int cnt)
{
    if (cnt == 3) {
        sum = 0;
        for (int card : selected)
            sum += card;

        digit = sum % 10;
        if (digit >= max_digit) {
            max_num = num;
            max_digit = digit;
        }

        return;
    }

    for (int i = idx; i < 5; i++) {
        selected.push_back(cards[i]);
        SelectCards(num, i + 1, cnt + 1);
        selected.pop_back();
    }
}


int main()
{
    cin >> n;

    for (int num = 1; num <= n; num++) {
        for (int i = 0; i < 5; i++)
            cin >> cards[i];
        SelectCards(num, 0, 0);
    }

    cout << max_num;

    return 0;
}
