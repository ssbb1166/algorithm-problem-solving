#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;


int n, trim, sum, avg, rating[300000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> rating[i];

    sort(rating, rating + n);

    trim = round(n * 0.15);
    for (int i = trim; i < n - trim; i++)
        sum += rating[i];

    avg = n > 0 ? round((double)sum / (n - trim * 2)) : 0;

    cout << avg;

    return 0;
}
