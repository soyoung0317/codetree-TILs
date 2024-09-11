#include <iostream>
#include <cmath>

using namespace std;

int main() {
  
    double sum = 0.0;
    double temp = 0.0;
    for (int i = 0; i < 8; i++)
    {
        cin >> temp;
        sum += temp;
    }

    double result = sum / 8.0;
    double ro_re = round(result * 10.0) / 10.0;

    cout << fixed;
    cout.precision(1);

    cout << ro_re << endl;
    return 0;
}