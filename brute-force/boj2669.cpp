#include <iostream>
using namespace std;


int area;
bool square[100][100];


int main()
{
    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int y = y1; y < y2; y++) {
            for (int x = x1; x < x2; x++) {
                if (!square[y][x]) {
                    square[y][x] = true;
                    area++;
                }
            }
        }
    }
    
    cout << area;

    return 0;
}
