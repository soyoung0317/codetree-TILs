#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, m;
    cin >> n >>m;

     int** arr = new int*[n]; 
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m]; 
    }

    int value = 0;
    for(int i = 0 ; i <n ; i++){
        for(int j = 0 ; j < m ; j++){
             ++value;
            arr[i][j] =value;
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}