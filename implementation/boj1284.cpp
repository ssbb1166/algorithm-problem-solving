#include <iostream>
using namespace std;


string n;
int width;


int main()
{
    while (1) {
        cin >> n;

        if (n == "0") break;

        width = 1;
        for (int i = 0; i < n.length(); i++) {
            if (n[i] == '1') width += 2;
            else if (n[i] == '0') width += 4;
            else width += 3;
            width++;
        }

        cout << width << '\n';
    }
    return 0;
}
