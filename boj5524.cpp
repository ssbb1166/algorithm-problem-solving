#include <iostream>
#include <string>
using namespace std;


int n;
string name;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name;
        for (int j = 0; j < name.length(); j++)
            name[j] = tolower(name[j]);
        cout << name << '\n';
    }

    return 0;
}
