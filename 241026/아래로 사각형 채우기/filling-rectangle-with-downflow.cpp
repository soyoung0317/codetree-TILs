#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int number = 0;
    cin >> number;

    int arr[10][10] = {};

    int value = 1;
    for(int i = 0 ; i < number; i++){
            for(int j = 0 ; j < number; j++)
                arr[j][i] =  value++;
    }
    
    for(int i = 0 ; i < number; i++){
        for(int j = 0 ; j < number; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}