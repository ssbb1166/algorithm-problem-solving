#include <string>
#include <queue>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {

    queue<int> q;
    q.push(0);

    for (int i = 0; i < numbers.size(); i++) {
        int qsize = q.size();
        int number = numbers[i];

        for (int j = 0; j < qsize; j++) {
            int x = q.front();
            q.pop();
            q.push(x + number);
            q.push(x - number);
        }
    }

    int qsize = q.size();
    int answer = 0;

    for (int i = 0; i < qsize; i++) {
        int x = q.front();
        q.pop();
        if (x == target)
            answer++;
    }

    return answer;
}
