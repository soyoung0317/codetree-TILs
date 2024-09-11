#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int number = 0;
    cin >> number;

    double degree;
    double sum = 0.0;

    for (int i = 0; i < number; ++i)
    {
        cin >> degree;
        sum += degree;
    }

    double result = sum / (double)number;
    double avg = round(result * 10.0) / 10.0;

    cout<<fixed;
    cout.precision(1);
    cout << avg << endl;

    if (avg >= 4.0)
        cout << "Perfect";
    else if(avg >= 3.0 && avg < 4.0)
        cout << "Good";
    else
        cout << "Poor";

    return 0;
}