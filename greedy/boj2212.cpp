#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, k, x, sum;
vector<int> sensors, sections;


int main()
{
    cin >> n >> k;

    while (n--) {
        cin >> x;
        sensors.push_back(x);
    }

    sort(sensors.begin(), sensors.end());
    sensors.erase(unique(sensors.begin(), sensors.end()), sensors.end());

    int prev = sensors[0];
    for (vector<int>::iterator iter = sensors.begin() + 1; iter < sensors.end(); iter++) {
        sections.push_back(*iter - prev);
        prev = *iter;
    }

    sort(sections.begin(), sections.end(), greater<int>());
    
    for (vector<int>::iterator iter = sections.begin() + k - 1; iter < sections.end(); iter++)
        sum += *iter;

    cout << sum;

    return 0;
}
