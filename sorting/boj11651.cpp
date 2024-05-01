#include <algorithm>
#include <iostream>
using namespace std;


int n;
pair<int, int> point[100000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> point[i].second >> point[i].first;

    sort(point, point + n);

    for (int i = 0; i < n; i++)
        cout << point[i].second << ' ' << point[i].first << '\n';

    return 0;
}
