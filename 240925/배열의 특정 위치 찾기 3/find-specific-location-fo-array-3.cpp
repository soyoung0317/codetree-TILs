#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int Count = 0;
    bool Once = true;
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];

        if (Once && arr[i] == 0)
        {
            Count = i;
            Once = false;
        }
    }
   
    cout << arr[Count - 3] + arr[Count - 2] + arr[Count - 1] << endl;
    
    return 0;
}