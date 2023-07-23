#include <iostream>
#include <string>
using namespace std;


int n, p, c, max_c;
string name, max_name;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> p;

        max_c = 0;
        for (int j = 0; j < p; j++) {
            cin >> c >> name;
            if (c > max_c) {
                max_c = c;
                max_name = name;
            }
        }

        cout << max_name << '\n';
    }
    return 0;
}
