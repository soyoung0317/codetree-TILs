#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string se_number, thr_number;
    cin >> se_number >> thr_number;

    int arr[10][10];

    // 이진법에 대한 숫자 리스트 
    for (int i = 0; i < se_number.size(); i++)
    {
        string temp = se_number;
        temp[i] == '1' ? temp[i] = '0' : temp[i] = '1';
        int sum = 0;

        for (int j = 0; j < se_number.size(); j++)
        {
            int number = temp[j] - '0';
            sum += number * pow(2, se_number.size() - j - 1);
        }
        arr[i][0] = sum;
    }

    for (int i = 0; i < thr_number.size(); i++)
    {
        string temp = thr_number;
        temp[i] == '1' ? temp[i] = '0' : temp[i] = '1';
        int sum = 0;

        for (int j = 0; j < thr_number.size(); j++)
        {
            int number = temp[j] - '0';
            sum += number * pow(3, thr_number.size() - j - 1);
        }
        arr[i][1] = sum;
    }

    for (int i = 0; i < se_number.size(); i++)
    {
        for (int j = 0; j < thr_number.size(); j++)
        {
            if (arr[i][0] == arr[j][1])
                cout << arr[i][0];
        }
    }
    return 0;
}