#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int size = 0;
    cin >> size;

    int arr[10][10] = {};
    int row = size - 1; // 4
    int count = 1;
    bool side = false;

    // 값입력
    for (int col = size - 1; col >= 0; col--)
    {
        side = !side;

        while (1)
        {
            arr[row][col] = count;

            side == true ? row-- : row++;

            if (row < 0 || row == size)
                break;
            else
                count++;
        }
    }

    // 결과 출력 
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