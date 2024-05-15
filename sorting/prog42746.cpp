#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(const string &s1, const string &s2)
{
    string concatenation1 = s1 + s2;
    string concatenation2 = s2 + s1;

    return concatenation1 > concatenation2;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> integers;

    for (int i = 0; i < numbers.size(); i++)
        integers.push_back(to_string(numbers[i]));

    sort(integers.begin(), integers.end(), compare);

    if (integers[0] == "0")
        return "0";

    for (int i = 0; i < integers.size(); i++)
        answer += integers[i];

    return answer;
}
