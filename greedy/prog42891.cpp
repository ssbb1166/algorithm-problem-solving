#include <algorithm>
#include <queue>
#include <string>
#include <vector>
using namespace std;


int solution(vector<int> food_times, long long k) {
    int answer = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < food_times.size(); i++)
        pq.push({ food_times[i], i });

    int prev = 0, t = 0;
    while (!pq.empty()) {
        prev = t;
        t = pq.top().first;

        if (k < (t - prev) * pq.size()) {
            while (k >= pq.size())
                k -= pq.size();
            break;
        }

        k -= (t - prev) * pq.size();
        while (!pq.empty() && pq.top().first == t)
            pq.pop();
    }

    if (pq.empty())
        return -1;

    for (answer = 0; answer < food_times.size(); answer++) {
        if (k < 0) break;
        if (food_times[answer] >= t) k--;
    }

    return answer;
}
