#include <iostream>

using namespace std;

int main() {
    int arr[10];

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        int temp = 0;
        cin >> temp;

        arr[i] = temp;
        sum += temp;
    }

    cout << sum << endl;
    return 0;
}