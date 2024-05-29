#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w = 0, h = 0;

    for (vector<int> card : sizes) {
        if (card[0] < card[1]) {
            w = max(w, card[0]);
            h = max(h, card[1]);
        }
        else {
            w = max(w, card[1]);
            h = max(h, card[0]);
        }
    }

    return w * h;
}
