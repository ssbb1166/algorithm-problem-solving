#include <iostream>
#include <string>
using namespace std;


int n;
string name;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> name;

        for (int j = 0; j < name.length(); j++) {
            if (name[j] == 'Z')
                name[j] = 'A';
            else
                name[j] = name[j] + 1;
        }

        cout << "String #" << i << '\n';
        cout << name << '\n' << '\n';
    }

    return 0;
}
