#include <iostream>
#include <cmath>
using namespace std;

int main() {
       int arr[10];

    int even_sum = 0;
    int triple_sum = 0;
    int Cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        if (i % 2 == 1)
            even_sum += arr[i];

        if (i % 3 == 2)
        {
            triple_sum += arr[i];
            ++Cnt;
        }
    }

    cout << even_sum << " ";

    double avg = round((double)triple_sum * 10.0) / 10.0 / (double)Cnt;
    cout << fixed;
    cout.precision(1);

    cout << avg;
    return 0;
}