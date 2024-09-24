#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0 };
    bool Check = false;

    int Sum = 0;
    int Cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
            Check = true;

        if (!Check && arr[i] %2 == 0)
        {
            ++Cnt;
            Sum += arr[i];
        }
    }

    cout << Cnt << " " << Sum;
      return 0;
}