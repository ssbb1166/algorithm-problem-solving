#include <iostream>
using namespace std;


int n;


int main()
{ 
    cin >> n;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << ' ';
        for (int j = 0; j < i; j++)
            cout << '*';
        cout << '\n';
    }

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << ' ';
        for (int j = 0; j < i; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
