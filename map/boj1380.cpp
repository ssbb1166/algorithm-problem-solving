#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


int scenario, n, num, cnt[101];
char letter;
string name;
unordered_map<int, string> students;


int main()
{
    while (++scenario) {
        cin >> n;
        cin.ignore();
        if (n == 0) break;

        for (int num = 1; num <= n; num++) {
            cnt[num] = 0;
            getline(cin, name);
            students[num] = name;
        }

        for (int i = 0; i < 2 * n - 1; i++) {
            cin >> num >> letter;
            cnt[num]++;
        }

        for (int num = 1; num <= n; num++) {
            if (cnt[num] < 2) {
                cout << scenario << ' ' << students[num] << '\n';
                break;
            }
        }
    }

    return 0;
}
