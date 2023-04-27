#include <iostream>
using namespace std;


int n, score, max_score;
double sum, avg;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> score;
        sum += score;
        if (score > max_score)
            max_score = score;
    }

    avg = (sum / max_score * 100) / n;

    cout << avg << '\n';

    return 0;
}
