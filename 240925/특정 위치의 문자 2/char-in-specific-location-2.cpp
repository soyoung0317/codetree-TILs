#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
    }
   
    cout << arr[1] << " " << arr[4] << " " << arr[7];
    return 0;
}