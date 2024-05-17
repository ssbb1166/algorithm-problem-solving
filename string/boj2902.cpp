#include <iostream>
#include <string>
using namespace std;


string long_form, short_form;


int main()
{
    cin >> long_form;

    for (int i = 0; i < long_form.size(); i++)
        if (long_form[i] >= 'A' && long_form[i] <= 'Z')
            short_form += long_form[i];

    cout << short_form << '\n';

    return 0;
}
