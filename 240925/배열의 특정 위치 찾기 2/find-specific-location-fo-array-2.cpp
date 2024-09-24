#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0 };

    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if(i %2 == 0)
            even_sum += arr[i];
        else
            odd_sum += arr[i];
    }

    cout << abs(even_sum - odd_sum) << endl;
    return 0;
}