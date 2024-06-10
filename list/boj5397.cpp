#include <iostream>
#include <list>
#include <string>
using namespace std;


int t;
string l;
list<char> password;
list<char>::iterator cursor;


int main()
{
    cin >> t;

    while (t--) {
        cin >> l;

        password.clear();
        cursor = password.begin();

        for (char key : l) {
            if ((key >= 'A' && key <= 'Z') ||
                (key >= 'a' && key <= 'z') ||
                (key >= '0' && key <= '9'))
                password.insert(cursor, key);
            if (key == '-' && cursor != password.begin())
                cursor = password.erase(--cursor);
            if (key == '<' && cursor != password.begin())
                cursor--;
            if (key == '>' && cursor != password.end())
                cursor++;
        }

        for (char key : password)
            cout << key;
        cout << '\n';
    }

    return 0;
}
