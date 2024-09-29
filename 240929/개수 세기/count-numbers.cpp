#include <iostream>

using namespace std;

int main() {
    int count, number;
    cin >> count >> number;

    int* arr = new int[count];
    int answer = 0;

    for (int i = 0; i < count; i++) {
        cin >> arr[i];

        if (arr[i] == number)
            answer += 1;
    }

    cout << answer << endl;

    return 0;
}