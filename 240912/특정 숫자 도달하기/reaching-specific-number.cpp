#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int arr[10];

    int check = 0;
    bool bch = false;
    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];

        if (arr[i] >= 250 && !bch)
        {
            check = i;
            bch = true;
        }
    }

    if (check == 0)
        check = 10;

    int sum = 0;
    for (int i = 0; i < check; ++i)
        sum += arr[i];

    cout << sum << " ";

    double result = (double)sum / (double)check;
    double roundedResult = round(result * 10.0) / 10.0;

    cout << fixed;
    cout.precision(1);
    cout<< roundedResult << endl;
    return 0;
}