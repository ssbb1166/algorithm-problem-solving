#include <iostream>
using namespace std;


char first;


int main()
{
	cin >> first;

	if (first == 'M')
		cout << "MatKor" << '\n';
	else if (first == 'W')
		cout << "WiCys" << '\n';
	else if (first == 'C')
		cout << "CyKor" << '\n';
	else if (first == 'A')
		cout << "AlKor" << '\n';
	else
		cout << "$clear" << '\n';

	return 0;
}
