#include <iostream>
#include <vector>
using namespace std;


long long n;
vector<int> digits;


int main()
{
    cin >> n;

    while (n > 0) {
        digits.push_back(n & 1);
        n >>= 1;
    }

    for (int i = digits.size() - 1; i >= 0; i--)
        cout << digits[i];

    return 0;
}
