#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
     string arr_str[3];
    int arr_int[3] = { 0 };

    int m_isymptom[4] = { 0 };
    int m_iEmbrass = 0;

    for (int i = 0; i < 3; i++) {
        cin >> arr_str[i];
        cin >> arr_int[i];

        if (arr_str[i] == "Y") {
            if (arr_int[i] >= 37) {
                m_isymptom[0] += 1;
                m_iEmbrass += 1;
            }
            else
                m_isymptom[2] += 1;
        }
        else {
            if (arr_int[i] >= 37)
                m_isymptom[1] += 1;
            else
                m_isymptom[3] += 1;
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << m_isymptom[i] << " ";
    }

    if (m_iEmbrass == 2)
        cout << "E";
    return 0;
}