#include <iostream>
#include <map>
#include <string>
using namespace std;


int n;
string filename, extension;
map<string, int> cnt;


int main()
{
    cin >> n;

    while (n--) {
        cin >> filename;

        for (int i = 0; i < filename.length(); i++) {
            if (filename[i] == '.') {
                extension = filename.substr(i + 1);
                cnt[extension]++;
                break;
            }
        }
    }

    for (pair<string, int> res : cnt)
        cout << res.first << ' ' << res.second << '\n';

    return 0;
}
