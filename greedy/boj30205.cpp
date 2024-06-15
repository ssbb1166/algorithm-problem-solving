#include <algorithm>
#include <iostream>
using namespace std;


int n, m, s[500][500], item[500];
long long p;


bool Possible()
{
    for (int i = 0; i < n; i++) {
        sort(s[i], s[i] + m);
        
        for (int j = 0; j < m; j++)
            cout << s[i][j] << ' ';
        cout << '\n';

        cout << item[i] << '\n';
        int j = item[i];
        while (j < m && s[i][j] <= p)
            p += s[i][j++];

        while (j < m) {
            if (s[i][j] <= p)
                p += s[i][j++];
            else if (item[i]--)
                p *= 2;
            else
                return 0;
        }

        while (item[i]--)
            p *= 2;
    }

    return 1;
}


int main()
{
    cin >> n >> m >> p;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s[i][j];
            if (s[i][j] == -1)
                item[i]++;
        }
    }

    cout << Possible();

    return 0;
}
