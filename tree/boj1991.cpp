#include <iostream>
using namespace std;


int n, parent[27], lc[27], rc[27];
char c, l, r;


void Preorder(int cur)
{
    cout << char(cur + 'A' - 1);
    if (lc[cur] != 0) Preorder(lc[cur]);
    if (rc[cur] != 0) Preorder(rc[cur]);
}


void Inorder(int cur)
{
    if (lc[cur] != 0) Inorder(lc[cur]);
    cout << char(cur + 'A' - 1);
    if (rc[cur] != 0) Inorder(rc[cur]);
}


void Postorder(int cur)
{
    if (lc[cur] != 0) Postorder(lc[cur]);
    if (rc[cur] != 0) Postorder(rc[cur]);
    cout << char(cur + 'A' - 1);
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c >> l >> r;
        if (l != '.') lc[c - 'A' + 1] = l - 'A' + 1;
        if (r != '.') rc[c - 'A' + 1] = r - 'A' + 1;
    }

    Preorder(1);
    cout << '\n';
    Inorder(1);
    cout << '\n';
    Postorder(1);
    cout << '\n';

    return 0;
}
