#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int fail_cnt[502], clear_cnt[502];
pair<double, int> fail_rate[501];


vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;

    for (int stage : stages)
        fail_cnt[stage]++;

    for (int stage = N; stage > 0; stage--) {
        clear_cnt[stage] = clear_cnt[stage + 1] + fail_cnt[stage + 1];
        double reach_cnt = fail_cnt[stage] + clear_cnt[stage];
        fail_rate[stage] = { reach_cnt > 0 ? -fail_cnt[stage] / reach_cnt : 0, stage };
    }

    sort(fail_rate + 1, fail_rate + N + 1);

    for (int i = 1; i <= N; i++)
        answer.push_back(fail_rate[i].second);

    return answer;
}
