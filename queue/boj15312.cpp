#include <iostream>
#include <queue>
#include <string>
using namespace std;


string a, b;
queue<int> score;
int n, strokes[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };


int main()
{
    cin >> a >> b;

    n = a.length();

    for (int i = 0; i < n; i++) {
        score.push(strokes[a[i] - 'A']);
        score.push(strokes[b[i] - 'A']);
    }

    for (int digit = n * 2 - 1; digit >= 2; digit--) {
        int prev = score.front();
        score.pop();
        for (int i = 0; i < digit; i++) {
            int curr = score.front();
            score.push((prev + curr) % 10);
            score.pop();
            prev = curr;
        }
    }

    cout << score.front();
    score.pop();
    cout << score.front();

    return 0;
}
