#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int n, total, num;
map<int, pair<int, int>> candidates;


bool Compare(pair<int, pair<int, int>>& a, pair<int, pair<int, int>>& b)
{
    if (a.second.first == b.second.first)
        return a.second.second < b.second.second;
    return a.second.first < b.second.first;
}


int main()
{
    cin >> n >> total;

    for (int i = 0; i < total; i++) {
        cin >> num;
        if (candidates.find(num) != candidates.end()) {
            candidates[num].first++;
        }
        else if (candidates.size() < n) {
            candidates[num] = { 1, i };
        }
        else {
            vector<pair<int, pair<int, int>>> tmp(candidates.begin(), candidates.end());
            sort(tmp.begin(), tmp.end(), Compare);
            candidates.erase(tmp[0].first);
            candidates[num] = { 1, i };
        }
    }

    for (pair<int, pair<int, int>> candidate : candidates)
        cout << candidate.first << ' ';

    return 0;
}
