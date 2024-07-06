#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int d_len, w_len, res = 8, seq[8];
bool possible, visited[8];
vector<int> wd, d;


void Check(int cnt)
{
    if (cnt == d_len) {
        for (int start = 0; start < w_len; start++) {
            int i = 0, person = 0;
            while (i < w_len) {
                int idx, sum = 0;
                while (sum <= seq[person]) {
                    idx = (start + i++) % w_len;
                    sum += wd[idx];
                }
                if (++person == d_len) break;
            }

            if (i >= w_len) {
                possible = true;
                res = min(res, person);
            }
        }

        return;
    }

    for (int i = 0; i < d_len; i++) {
        if (!visited[i]) {
            visited[i] = true;
            seq[cnt] = d[i];
            Check(cnt + 1);
            visited[i] = false;
        }
    }
}


int solution(int n, vector<int> weak, vector<int> dist) {
    int answer = 0;

    d = dist;
    d_len = dist.size();
    w_len = weak.size();

    for (int i = 0; i < w_len - 1; i++)
        wd.push_back(weak[i + 1] - weak[i]);
    wd.push_back(n - weak[w_len - 1] + weak[0]);

    Check(0);

    if (possible)
        answer = res;
    else
        answer = -1;

    return answer;
}
