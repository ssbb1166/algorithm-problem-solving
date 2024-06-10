#include <iostream>
#include <list>
#include <string>
using namespace std;


int m;
char cmd, c;
string str;
list<char> editor;
list<char>::iterator cursor;


int main()
{
    cin >> str >> m;

    for (char c : str)
        editor.push_back(c);

    cursor = editor.end();

    while (m--) {
        cin >> cmd;

        if (cmd == 'L' && cursor != editor.begin())
            cursor--;

        if (cmd == 'D' && cursor != editor.end())
            cursor++;

        if (cmd == 'B' && cursor != editor.begin())
            cursor = editor.erase(--cursor);

        if (cmd == 'P') {
            cin >> c;
            editor.insert(cursor, c);
        }
    }

    for (char c : editor)
        cout << c;

    return 0;
}
