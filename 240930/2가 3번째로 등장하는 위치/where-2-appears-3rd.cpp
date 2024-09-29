#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 0;
    cin >> number;

    int* arr = new int[number];

    int iCount = 0;
    int index = -1;
    for (int i = 0; i < number; i++) {
        cin >> arr[i];

        if (arr[i] == 2){
            ++iCount;
        
            if (iCount == 3 )
                index = i + 1;
        }
    }

    cout << index << endl;

    return 0;
}