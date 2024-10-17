#include <algorithm>
#include <iostream>
using namespace std;


int n, country, student, score, medal, cnt[101];
pair<int, pair<int, int>> result[100];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> country >> student >> score;
        result[i].first = score;
        result[i].second.first = country;
        result[i].second.second = student;
    }

    sort(result, result + n, greater<pair<int, pair<int, int>>>());

    for (int i = 0; i < n; i++) {
        country = result[i].second.first;
        student = result[i].second.second;

        if (cnt[country] < 2) {
            cout << country << ' ' << student << '\n';
            cnt[country]++;
            medal++;
        }

        if (medal == 3) break;
    }

    return 0;
}
