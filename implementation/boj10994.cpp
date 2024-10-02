#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int i = 0; i <= 2 * n - 2; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j <= 2 * n - 3; j++) {
                if (j % 2 == 1 && j < i)
                    cout << ' ';
                else
                    cout << '*';
            }
            cout << '*';
            for (int j = 2 * n - 3; j >= 0; j--) {
                if (j % 2 == 1 && j < i)
                    cout << ' ';
                else
                    cout << '*';
            }
        }
        else {
            for (int j = 0; j <= 2 * n - 3; j++) {
                if (j % 2 == 0 && j < i)
                    cout << '*';
                else
                    cout << ' ';
            }
            cout << ' ';
            for (int j = 2 * n - 3; j >= 0; j--) {
                if (j % 2 == 0 && j < i)
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        cout << '\n';
    }

    for (int i = 2 * n - 3; i >= 0; i--) {
        if (i % 2 == 0) {
            for (int j = 0; j <= 2 * n - 3; j++) {
                if (j % 2 == 1 && j < i)
                    cout << ' ';
                else
                    cout << '*';
            }
            cout << '*';
            for (int j = 2 * n - 3; j >= 0; j--) {
                if (j % 2 == 1 && j < i)
                    cout << ' ';
                else
                    cout << '*';
            }
        }
        else {
            for (int j = 0; j <= 2 * n - 3; j++) {
                if (j % 2 == 0 && j < i)
                    cout << '*';
                else
                    cout << ' ';
            }
            cout << ' ';
            for (int j = 2 * n - 3; j >= 0; j--) {
                if (j % 2 == 0 && j < i)
                    cout << '*';
                else
                    cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}
