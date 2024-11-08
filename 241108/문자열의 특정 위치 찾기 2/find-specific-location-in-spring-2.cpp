#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[5] = { "apple", "banana", "grape", "blueberry", "orange"};
    char cmp;
    cin >> cmp;

    int count = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        if(arr[i][2] == cmp|| arr[i][3] == cmp)
        {
            count += 1;
            cout << arr[i] << endl;
        }
    }

    cout << count << endl;
    return 0;
}