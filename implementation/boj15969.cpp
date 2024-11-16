#include <algorithm>
#include <iostream>
using namespace std;


int n, score, max_score, min_score = 1000;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> score;
        max_score = max(score, max_score);
        min_score = min(score, min_score);
    }

    cout << max_score - min_score;

    return 0;
}
