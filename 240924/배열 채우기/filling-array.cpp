#include <iostream>
using namespace std;

int main() {
    int arr[10] = { 0 };

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];

        if (arr[i] == 0)
            break;
    }


    for (int i = 9; i < 10; i--)
    {
        if (i < 0)
            break;

        if (arr[i] == 0)
            continue;
        else
            cout << arr[i] << " ";
    }
}