#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;


int p, m, l;
string n;
bool enter;
vector<pair<pair<int, int>, set<pair<string, int>>>> rooms;


int main()
{
    cin >> p >> m;

    while (p--) {
        cin >> l >> n;

        enter = false;
        for (pair<pair<int, int>, set<pair<string, int>>>& room : rooms) {
            int min_level = room.first.first;
            int max_level = room.first.second;
            set<pair<string, int>> players = room.second;
            if (l >= min_level && l <= max_level && players.size() < m) {
                room.second.insert({ n, l });
                enter = true;
                break;
            }
        }

        if (!enter) rooms.push_back({ {l - 10, l + 10}, {{n, l}} });
    }

    for (pair<pair<int, int>, set<pair<string, int>>> room : rooms) {
        set<pair<string, int>> players = room.second;
        cout << (players.size() == m ? "Started!" : "Waiting!") << '\n';
        for (pair<string, int> player : players)
            cout << player.second << ' ' << player.first << '\n';
    }

    return 0;
}
