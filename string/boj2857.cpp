#include <iostream>
#include <string>
using namespace std;


string name;
bool is_find;


int main()
{
    for (int i = 1; i <= 5; i++) {
        cin >> name;

        if (name.find("FBI") != string::npos) {
            is_find = true;
            cout << i << ' ';
        }
    }

    if (!is_find) cout << "HE GOT AWAY!" << '\n';

    return 0;
}
