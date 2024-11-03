#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m ;
    cin >> n >> m;
    int arr[100][100] = {};

    int num = 1;
    for (int s = 0; s < n + m - 1; s++) {
        for (int i = 0; i < n; i++) {
            int j = s - i;
            if (j >= 0 && j < m) {
                arr[i][j] = num++;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}