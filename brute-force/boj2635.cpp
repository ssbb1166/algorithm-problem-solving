#include <iostream>
#include <vector>
using namespace std;


int n;
vector<int> res;


int main()
{
    cin >> n;

    for (int m = 1; m <= n; m++) {
        vector<int> numbers = { n, m };
        
        int idx = 2;
        while (numbers[idx - 2] - numbers[idx - 1] >= 0) {
            numbers.push_back(numbers[idx - 2] - numbers[idx - 1]);
            idx++;
        }

        if (numbers.size() > res.size()) res = numbers;
    }

    cout << res.size() << '\n';
    for (int num : res) cout << num << ' ';

    return 0;
}
