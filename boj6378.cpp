#include <iostream>
#include <string>
using namespace std;


int root;
string n;


int main()
{
    while (1) {
        cin >> n;

        if (n == "0") break;

        while (n.length() >= 2) {
            for (int i = 0; i < n.length(); i++)
                root += n[i] - '0';
            n = to_string(root);
            root = 0;
        }

        cout << n << '\n';
    }

    return 0;
}
