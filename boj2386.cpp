#include <iostream>
#include <string>
using namespace std;


int cnt;
string line;


int main()
{
    while (1)
    {
        getline(cin, line);

        if (line == "#") break;

        cnt = 0;
        for (int i = 2; i < line.length(); i++)
            if (line[i] == line[0] || line[i] == line[0] - 'a' + 'A')
                cnt++;

        cout << line[0] << ' ' << cnt << '\n';
    }

    return 0;
}
