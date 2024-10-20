#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int count = 0;
    cin >> count ; 

    int* arr = new int[count];

    for(int i = 0 ; i < count ; i++){
        cin >> arr[i];
    }

    int low_gap = INT_MAX;
    for(int i = 0 ; i < count ; i++){
        for(int j = i+1 ; j < count ; j++){
            low_gap = min(low_gap, abs(arr[i] - arr[j]));
        }
    }

    cout << low_gap << endl;
    return 0;
}