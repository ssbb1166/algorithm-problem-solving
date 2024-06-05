#include <iostream>
using namespace std;


int h1, h2, h3, w1, w2, w3;


int main()
{
    cin >> h1 >> w1 >> h2 >> w2 >> h3 >> w3;

    if (h1 == h2 && h2 == h3 && w1 + w2 + w3 == h1 ||
        h2 == h3 && w1 + h2 == h1 && w2 + w3 == h1 ||
        h2 + w3 == h1 && w1 + w2 == h1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
