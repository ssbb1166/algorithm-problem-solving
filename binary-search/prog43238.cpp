#include <string>
#include <vector>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;

    long long low = 1, high = n * 1e9;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long cnt = 0;
        for (int t : times)
            cnt += mid / t;

        if (cnt >= n) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return answer;
}
