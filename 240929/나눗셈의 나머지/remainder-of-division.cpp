#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num_a, num_b;
    cin >> num_a >> num_b;

    int answer = 0;
    int arr[1000] = { 0 };

    while (num_a > 1)
    {
        int temp = num_a % num_b;
        arr[temp] += 1;

        num_a /= num_b;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (arr[i] == 0)
            continue;

        answer += pow(arr[i], 2);
    }

    cout << answer << endl;
    return 0;
}