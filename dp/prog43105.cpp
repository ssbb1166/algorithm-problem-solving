#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int height = triangle.size();

    for (int depth = 1; depth < height; depth++) {
        triangle[depth][0] += triangle[depth - 1][0];
        triangle[depth][depth] += triangle[depth - 1][depth - 1];
        for (int i = 1; i < depth; i++)
            triangle[depth][i] += max(triangle[depth - 1][i - 1], triangle[depth - 1][i]);
    }

    for (int i = 0; i < height; i++)
        answer = max(answer, triangle[height - 1][i]);

    return answer;
}
