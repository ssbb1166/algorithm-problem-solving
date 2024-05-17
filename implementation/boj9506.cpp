#include <iostream>
#include <vector>
using namespace std;


int n, sum;
vector<int> divisors;


int main()
{
    while (1) {
        cin >> n;

        if (n == -1) break;

        sum = 0;
        divisors.clear();
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                sum += i;
            }
        }

        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < divisors.size(); i++) {
                cout << divisors[i];
                if (i < divisors.size() - 1)
                    cout << " + ";
            }
        }
        else {
            cout << n << " is NOT perfect.";
        }
        cout << "\n";
    }

    return 0;
}
