#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;

    vector<int> student1 = { 1, 2, 3, 4, 5 };
    vector<int> student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int score[3] = { 0, 0, 0 };

    for (int num = 0; num < answers.size(); num++) {
        if (student1[num % student1.size()] == answers[num]) score[0]++;
        if (student2[num % student2.size()] == answers[num]) score[1]++;
        if (student3[num % student3.size()] == answers[num]) score[2]++;
    }

    if (score[0] >= score[1] && score[0] >= score[2])
        answer.push_back(1);
    if (score[1] >= score[0] && score[1] >= score[2])
        answer.push_back(2);
    if (score[2] >= score[0] && score[2] >= score[1])
        answer.push_back(3);

    return answer;
}
