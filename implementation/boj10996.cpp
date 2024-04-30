#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int i = 0; i < n * 2; i++) {
        if (i % 2 == 0)
            for (int j = 0; j < (n + 1) / 2; j++)
                cout << "* ";
        else
            for (int j = 0; j < n / 2; j++)
                cout << " *";
        cout << '\n';
    }

    return 0;
}
