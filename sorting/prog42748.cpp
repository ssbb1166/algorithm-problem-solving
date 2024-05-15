#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (int c = 0; c < commands.size(); c++) {
        vector<int> cmd = commands[c], tmp;
        int i = cmd[0] - 1, j = cmd[1] - 1, k = cmd[2] - 1;
        for (int idx = i; idx <= j; idx++)
            tmp.push_back(array[idx]);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[k]);
    }

    return answer;
}
