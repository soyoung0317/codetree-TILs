#include <iostream>
#include <string>

using namespace std;

int main() {
    int number, question;
    cin >> number >> question;

    int* arr = new int[number];

    for (int i = 0; i < number; i++) {
        cin >> arr[i];
    }

    string* str_arr = new string[number];
    int q_compare = 0;

    while (q_compare < question ) {
        int q_q, q_n;
        cin >> q_q >> q_n;

        switch (q_q)
        {
        case 1:
            str_arr[q_compare] = to_string(arr[q_n-1]);
            break;
        case 2:
        {
        int index = -1;
        for (int i = 0; i < number; i++) {
            if (q_n == arr[i]) {
                index = i + 1;
                break;
            }
        }

        if (index == -1)
            str_arr[q_compare] = "0";
        else
            str_arr[q_compare] = to_string(index);
        }
            break;
        case 3:
            int limit = 0;
            cin >> limit;
            string str_temp = "";
            
            for (int i = q_n - 1; i <= limit - 1; i++) {
                str_temp += to_string(arr[i]);
                str_temp += " ";
            }
            str_arr[q_compare] = str_temp;
            break;
        }

        ++q_compare;
    }

    for (int i = 0; i < number; i++) {
        cout << str_arr[i] << endl;
    }
    return 0;
}