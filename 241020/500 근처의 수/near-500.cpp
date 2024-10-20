#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];

    for(int i = 0 ; i < 10 ; i++){
        cin>>arr[i];
    }

    int i_min = INT_MAX;
    int i_max = INT_MIN;

    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] > 500)
            i_min = min(i_min, arr[i]);
        else
            i_max = max(i_max, arr[i]);
    } 

    cout << i_max << " " << i_min << endl;
    return 0;
}