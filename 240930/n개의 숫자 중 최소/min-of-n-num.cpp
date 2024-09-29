#include <iostream>
#include <climits>

using namespace std;

int main() {

    int number = 0;
    cin >> number;

    int count = 0;
    long long* arr = new long long[number];
    long long min_number = LLONG_MAX;

    for (int i = 0; i < number; i++) {
        cin >> arr[i];

        if (arr[i] < min_number)
            min_number = arr[i];
    }

    for (int i = 0; i < number; i++) 
        if (arr[i] == min_number)
            count++;

    cout << min_number << " " << count << endl;

    return 0;
}