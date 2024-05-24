#include <iostream>
#include <map>
#include <string>
using namespace std;


int n;
string name, state;
map<string, bool, greater<string>> enter;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name >> state;
        if (state == "enter")
            enter[name] = true;
        else
            enter[name] = false;
    }

    for (map<string, bool>::iterator iter = enter.begin(); iter != enter.end(); iter++)
        if (iter->second)
            cout << iter->first << '\n';

    return 0;
}
