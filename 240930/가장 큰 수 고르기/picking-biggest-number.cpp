#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[10] = {};
    int max_number = INT_MIN;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] > max_number)
            max_number = arr[i];
    }

    cout << max_number << endl;

    return 0;
}