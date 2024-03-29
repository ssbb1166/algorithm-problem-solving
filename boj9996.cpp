#include <iostream>
#include <string>
using namespace std;


int n;
char delimiter;
string pattern, prefix, suffix, filename;


int main()
{
    cin >> n >> pattern;

    delimiter = pattern.find('*');
    prefix = pattern.substr(0, delimiter);
    suffix = pattern.substr(delimiter + 1);

    for (int i = 0; i < n; i++) {
        cin >> filename;

        bool match = false;
        if (filename.find(prefix) == 0) {
            filename = filename.substr(prefix.length());
            if (filename.length() > suffix.length())
                filename = filename.substr(filename.length() - suffix.length());
            if (filename == suffix)
                match = true;
        }

        if (match)
            cout << "DA" << '\n';
        else
            cout << "NE" << '\n';
    }

    return 0;
}
