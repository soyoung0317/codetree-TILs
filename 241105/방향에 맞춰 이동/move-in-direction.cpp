#include <iostream>

using namespace std;

int main() {
    int order;
    cin >> order;

    int dx[4] = { 0, 1, 0, -1 };
    int dy[4] = { 1, 0, -1, 0 };
    int dir = 0;
    int curr_x = 0;
    int curr_y = 0;

    for (int i = 0; i < order; i++)
    {
        char temp = ' ';
        cin >> temp;

        switch (temp)
        {
        case 'W':
            dir = 3;
            break;
        case 'S':
            dir = 2;
            break;
        case 'N':
            dir = 0;
            break;
        case 'E':
            dir = 1;
            break;
        }

        int size = 0;
        cin >> size;

        curr_x += dx[dir] * size;
        curr_y += dy[dir] * size;
    }

    cout << curr_x << " " << curr_y << endl;
    return 0;
}