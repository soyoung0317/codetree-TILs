#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        int sum_add = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum_add += arr[i][j];
        }
        cout << fixed;
        cout.precision(1);
        cout << sum_add / 4.0 << " ";
    }
    cout << endl;

    int sum_total = 0;
    for (int i = 0; i < 4; i++) {
        int sum_add = 0;
        for (int j = 0; j < 2; j++) {
            sum_add += arr[j][i];
        }
        sum_total += sum_add;
        
        cout << sum_add / 2.0 << " ";
    }
    cout << endl;

    cout << sum_total / 8.0 << endl;
    return 0;
}