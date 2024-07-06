#include <string>
#include <vector>
using namespace std;


int solution(string s) {
    int answer = s.length();

    for (int unit_len = 1; unit_len < s.length(); unit_len++) {
        int idx, cnt = 1;
        string unit, prev = s.substr(0, unit_len), res = "";

        for (idx = unit_len; idx < s.length() - unit_len; idx += unit_len) {
            unit = s.substr(idx, unit_len);
            if (unit == prev) {
                cnt++;
            }
            else {
                res += (cnt > 1 ? prev + to_string(cnt) : prev);
                prev = unit;
                cnt = 1;
            }
        }

        unit = s.substr(idx);
        if (unit == prev) {
            cnt++;
            res += prev + to_string(cnt);
        }
        else {
            res += (cnt > 1 ? prev + to_string(cnt) : prev) + unit;
        }

        if (res.length() < answer)
            answer = res.length();
    }

    return answer;
}
