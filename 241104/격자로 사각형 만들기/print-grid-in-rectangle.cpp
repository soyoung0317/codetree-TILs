#include <iostream>
using namespace std;

int main() {
    int size = 0;
    cin >> size;

    int arr[10][10] = {};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1];

        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}