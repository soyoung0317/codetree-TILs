#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
        int arr[11] = { 0 };

    while (1){
        int temp = 0;
        cin >> temp;

        if (temp == 0)
            break;

        int number = temp / 10;
        arr[number] += 1;
    }

    for(int i = 10 ; i > 0 ; i--){
        cout << i * 10  << " - " << arr[i] << endl;
    }
    return 0;
}