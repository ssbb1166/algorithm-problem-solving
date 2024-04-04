#include <iostream>
#include <string>
using namespace std;


string message;
int happy, sad;


int main()
{
    getline(cin, message);

    for (int i = 0; i < message.size(); i++) {
        if (message[i] == ':' && message[i + 1] == '-') {
            if (message[i + 2] == ')')
                happy++;
            if (message[i + 2] == '(')
                sad++;
        }
    }

    if (happy == 0 && sad == 0)
        cout << "none" << '\n';
    else if (happy > sad)
        cout << "happy" << '\n';
    else if (happy < sad)
        cout << "sad" << '\n';
    else
        cout << "unsure" << '\n';

    return 0;
}
