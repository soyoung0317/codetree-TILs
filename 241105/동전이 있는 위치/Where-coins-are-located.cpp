#include <iostream>

using namespace std;

int main() {
    int size, cnt;
    cin >> size >> cnt; 

    int place[9][9] = {};

    for (int i = 0; i < cnt; i++)
    {
        int x, y;
        cin >> x >> y;

        place[x-1][y-1] = 1;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << place[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}