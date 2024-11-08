#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string arr[5] = { "apple", "banana", "grape", "blueberry", "orange"};

    int count = 0;

    for(int i = 0 ; i < 5 ; i++)
    {
        if(arr[i][2] == 'a'|| arr[i][3] == 'a')
        {
            count += 1;
            cout << arr[i] << endl;
        }
    }

     cout << count << endl;
    return 0;
}