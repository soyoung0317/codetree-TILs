#include <iostream>
#include <string>

using namespace std;

int main() {
    int cnt_a, cnt_b;
    cin >> cnt_a >> cnt_b;

    int* arr_a = new int[cnt_a];
    int* arr_b = new int[cnt_b];

    for (int i = 0; i < cnt_a; i++) {
        cin >> arr_a[i];
    }

    for (int i = 0; i < cnt_b; i++) {
        cin >> arr_b[i];
    }

    bool bCheck = false;
    int iCount = -1;
    for (int i = 0; i < cnt_a ; i++) {
        
        if (bCheck) // 연속체크 확인중
        {
            if (arr_a[i] == arr_b[iCount])
                iCount += 1;
            else // 중간에 끊김
                bCheck = false;
        }
        
        if (arr_a[i] == arr_b[0] && !bCheck){
            if (iCount == cnt_b) // 끊겼는데 그 전에 이미 완성함 -> 탈출
                break;
            else{ // 처음부터 다시 
            iCount = 1;
            bCheck = true;
            }
        }
    }

    if (iCount == cnt_b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}