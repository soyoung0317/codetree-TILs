#include <iostream>
using namespace std;

int main() {
    int size = 0; 
    cin >> size;

    int arr[15][15] = {};
    arr[0][0] = 1;

    for (int i = 1; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (j == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];

        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[i][j] == 0)
                continue;
                
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    
    return 0;
}