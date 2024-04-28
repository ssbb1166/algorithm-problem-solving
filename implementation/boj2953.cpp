#include <iostream>
using namespace std;


int score, sum, max_num, max_score;


int main()
{
    for (int i = 1; i <= 5; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> score;
            sum += score;
        }

        if (sum > max_score) {
            max_num = i;
            max_score = sum;
        }
    }

    cout << max_num << ' ' << max_score << '\n';

    return 0;
}
