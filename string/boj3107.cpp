#include <iostream>
#include <string>
using namespace std;


int len, cnt;
string compressed, group, full;


void AddGroup(string group)
{
    len = group.length();
    for (int i = 0; i < 4 - len; i++) full += '0';
    full += group;
}


int main()
{
    cin >> compressed;

    len = compressed.length();

    for (int i = 0; compressed[i]; i++)
        if (compressed[i] == ':')
            cnt++;

    if (cnt == 8 && compressed[0] == ':')
        compressed[0] = '0';

    if (cnt == 8 && compressed[len - 1] == ':')
        compressed[len - 1] = '0';

    for (int i = 0; compressed[i]; i++) {
        if (compressed[i] == ':' && compressed[i - 1] == ':') {
            while (cnt < 8) {
                AddGroup("0000");
                full += ':';
                cnt++;
            }
        }
        else if (compressed[i] == ':') {
            AddGroup(group);
            full += ':';
            group = "";
        }
        else {
            group += compressed[i];
        }
    }

    AddGroup(group);

    cout << full;

    return 0;
}
