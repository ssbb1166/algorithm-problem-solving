#include <iostream>
using namespace std;


int n, m, a, b, num, parent[500000];


int Find(int x)
{
	if (x == parent[x]) return x;
	return parent[x] = Find(parent[x]);
}


void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}


int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		parent[i] = i;

	for (int i = 1; i <= m; i++) {
		cin >> a >> b;

		if (Find(a) == Find(b)) {
			num = i;
			break;
		}

		Union(a, b);
	}

	cout << num << '\n';

	return 0;
}
