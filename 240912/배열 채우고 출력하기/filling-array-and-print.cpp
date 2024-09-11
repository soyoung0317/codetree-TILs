#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[10];

    for (int i = 0; i < 10; i++)
    {
        string temp = "";
        cin >> temp;

        arr[i] = temp;
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] ;
    }
    return 0;
}