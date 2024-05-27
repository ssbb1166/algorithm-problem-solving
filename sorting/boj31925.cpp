#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;


int n, s, a, m;
string name, jaehak, winner;
priority_queue<pair<int, string>, vector<pair<int, string>>, greater<>> pq;
vector<string> participants;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> jaehak >> winner >> s >> a;
        if (jaehak == "jaehak" && winner == "notyet" && (s == -1 || s > 3)) {
            pq.push({ a, name });
            m++;
        }
    }

    for (int i = 0; i < 10; i++) {
        if (pq.empty()) break;
        participants.push_back(pq.top().second);
        pq.pop();
    }

    sort(participants.begin(), participants.end());

    cout << participants.size() << '\n';
    for (string name : participants)
        cout << name << '\n';

    return 0;
}
