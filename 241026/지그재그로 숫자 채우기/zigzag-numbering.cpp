#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int row, column ;
    cin >> row >> column;

    int arr[100][100] = {};

    int value = 0;
    for(int i = 0 ; i < column; i++){
        if(i % 2 == 0)
        {
            for(int j = 0 ; j < row; j++)
                arr[j][i] =  value++;
        }
        else 
        {
            for(int j = row-1 ; j >=0; j--)
               arr[j][i] =  value++;
        }
    }
    
    for(int i = 0 ; i < row; i++){
        for(int j = 0 ; j < column; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}