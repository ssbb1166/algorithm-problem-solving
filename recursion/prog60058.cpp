#include <string>
#include <vector>
using namespace std;


bool IsCorrect(string p)
{
    int sum = 0;
    for (char c : p) {
        sum += (c == '(' ? 1 : -1);
        if (sum < 0) return false;
    }
    return true;
}


string GetCorrectString(string p)
{
    if (p == "") return p;

    int idx = 0, sum = 0;
    while (p[idx]) {
        sum += (p[idx++] == '(' ? 1 : -1);
        if (sum == 0) break;
    }

    string u = p.substr(0, idx);
    string v = p.substr(idx);

    if (IsCorrect(u)) {
        return u + GetCorrectString(v);
    }
    else {
        v = "(" + GetCorrectString(v) + ")";
        u = u.substr(1, u.length() - 2);
        for (char& c : u) c = (c == '(' ? ')' : '(');
        return v + u;
    }
}


string solution(string p)
{
    return GetCorrectString(p);
}
