#include <algorithm>
#include <iostream>
using namespace std;


int n, k;
double trimmed, adjusted, score[100000];


int main()
{
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
        cin >> score[i];

    sort(score, score + n);

    for (int i = k; i < n - k; i++)
        trimmed += score[i];

    for (int i = 0; i < k; i++)
        score[i] = score[k];

    for (int i = n - k; i < n; i++)
        score[i] = score[n - k - 1];

    for (int i = 0; i < n; i++)
        adjusted += score[i];

    cout << fixed;
    cout.precision(2);
    cout << trimmed / (n - k * 2) + 1e-8 << '\n' << adjusted / n + 1e-8;

    return 0;
}
