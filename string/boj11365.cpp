#include <iostream>
#include <string>
using namespace std;


string cipher;


int main()
{
    while (1) {
        getline(cin, cipher);

        if (cipher == "END") break;

        for (int i = cipher.size() - 1; i >= 0; i--)
            cout << cipher[i];

        cout << '\n';
    }

    return 0;
}
