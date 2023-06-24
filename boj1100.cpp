#include <iostream>
#include <string>
using namespace std;


int cnt;


int main()
{
    for (int y = 0; y < 8; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < 8; x++)
            if (x % 2 == 0 && y % 2 == 0 && line[x] == 'F' ||
                x % 2 == 1 && y % 2 == 1 && line[x] == 'F')
                cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
