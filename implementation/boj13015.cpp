#include <iostream>
using namespace std;


int n;


void PrintEdge(int n)
{
    for (int i = 0; i < n; i++)
        cout << '*';

    for (int i = 0; i < n * 2 - 3; i++)
        cout << ' ';

    for (int i = 0; i < n; i++)
        cout << '*';

    cout << '\n';
}


void PrintLine(int i, int n)
{
    for (int x = 0; x < n - i - 1; x++)
        cout << ' ';
    
    cout << '*';

    for (int x = 0; x < n - 2; x++)
        cout << ' ';
    
    cout << '*';

    for (int x = 0; x < i * 2 - 1; x++)
        cout << ' ';

    cout << '*';

    for (int x = 0; x < n - 2; x++)
        cout << ' ';

    cout << '*';
}


void PrintMiddle(int n)
{
    for (int i = n - 2; i >= 1; i--) {
        PrintLine(i, n);
        cout << '\n';
    }

    for (int i = 0; i < n - 1; i++)
        cout << ' ';
    
    cout << '*';

    for (int i = 0; i < n - 2; i++)
        cout << ' ';

    cout << '*';

    for (int i = 0; i < n - 2; i++)
        cout << ' ';

    cout << '*';

    cout << '\n';

    for (int i = 1; i <= n - 2; i++) {
        PrintLine(i, n);
        cout << '\n';
    }
}


int main()
{
    cin >> n;

    PrintEdge(n);
    PrintMiddle(n);
    PrintEdge(n);

    return 0;
}
