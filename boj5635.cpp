#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n, dd, mm, yyyy;
string name;
vector<pair<pair<int, int>, pair<int, string>>> students;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> dd >> mm >> yyyy;
        students.push_back({ {yyyy, mm}, {dd, name} });
    }

    sort(students.begin(), students.end());

    cout << students[n - 1].second.second << '\n';
    cout << students[0].second.second << '\n';

    return 0;
}
