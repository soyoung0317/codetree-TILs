#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main() {
  
    int student = 0;
    cin >> student;

    vector<string> arr;
    int passCnt = 0;

    while (student > 0)
    {
        int test[4] = { 0 };
        int Sum = 0;

        for (int i = 0; i < 4; i++)
        {
            cin >> test[i];
            Sum += test[i];
        }

        if (Sum / 4 >= 60)
        {
            arr.push_back("pass");
            ++passCnt;
        }
        else
            arr.push_back("fail");

        --student;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << passCnt;

    return 0;
}