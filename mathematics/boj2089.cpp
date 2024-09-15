#include <iostream>
#include <vector>
using namespace std;


int n;
vector<int> binary;


int main()
{
    cin >> n;

    if (n == 0)
        binary.push_back(0);

    while (n != 0) {
        if (n % -2 == 0) {
            binary.push_back(0);
            n = n / -2;
        }
        else {
            binary.push_back(1);
            n = (n - 1) / -2;
        }
    }

    for (int i = binary.size() - 1; i >= 0; i--)
        cout << binary[i];

    return 0;
}
