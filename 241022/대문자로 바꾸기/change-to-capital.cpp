#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char arr[5][3];

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j<3 ; j++){
            cin >> arr[i][j];
            arr[i][j] = toupper(arr[i][j]);

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}