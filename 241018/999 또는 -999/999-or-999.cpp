#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
        int max_num = INT_MIN;
    int min_num = INT_MAX;

    while (1) {
        int number = 0;
        cin >> number;
        
        if (number == 999 || number == -999)
            break;

        if (number > max_num)
            max_num = number;

        if (number < min_num)
            min_num = number;
    }

    cout << max_num << " " << min_num;
    return 0;

    return 0;
}