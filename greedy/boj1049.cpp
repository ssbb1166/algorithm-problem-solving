#include <iostream>
using namespace std;


int n, m, x, y, package = 1000, individual = 1000;


int main()
{
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		if (x < package)
			package = x;
		if (y < individual)
			individual = y;
	}

	if (package > individual * 6)
		cout << individual * n << '\n';
	else if (package < individual * (n % 6))
		cout << package * (n / 6) + package << '\n';
	else
		cout << package * (n / 6) + individual * (n % 6) << '\n';

	return 0;
}
