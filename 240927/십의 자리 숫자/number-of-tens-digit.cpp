#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
        int arr[10] = { 0 };

    while (1){
        int temp = 0;
        cin >> temp;

        if (temp == 0)
            break;

        int number = temp / 10;
        arr[number] += 1;
    }

    for (int i = 1; i < 10; i++) {
        cout << i << " - " << arr[i] << endl;
    }
    return 0;
}