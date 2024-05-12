#include <iostream>
using namespace std;


int n, correct, score, sum;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> correct;

        if (correct) {
            score++;
            sum += score;
        }
        else {
            score = 0;
        }
    }

    cout << sum << '\n';

    return 0;
}
