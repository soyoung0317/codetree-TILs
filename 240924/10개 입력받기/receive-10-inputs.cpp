#include <iostream>
#include <cmath>
using namespace std;

int main() {
     int arr[10] = { 0 };
    int Cnt = 0;
    bool Check = false;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
            Check = true;

        if(!Check)
            ++Cnt;
    }

    int Sum = 0;
    for (int i = 0; i < Cnt; i++)
    {
        Sum += arr[i];
    }

    cout << Sum << " ";

    double avg = (round((double)Sum * 10.0) / 10.0) / (double)Cnt;

    cout << fixed;
    cout.precision(1);
    cout << avg ; 

    return 0;
}