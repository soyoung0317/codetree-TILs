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
    int iCount = 1;
    for (int i = 0; i < cnt_a; i++) {
        
        if (bCheck)
        {
            if (arr_a[i] == arr_b[iCount])
                iCount += 1;
            else
                break;
        }
        
        if (arr_a[i] == arr_b[0])
            bCheck = true;

    }

    if (iCount == cnt_b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}