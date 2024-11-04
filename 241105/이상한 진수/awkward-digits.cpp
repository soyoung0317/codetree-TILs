#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<long long> Find_Bin(const string& binStr) 
{
    vector<long long> vec_temp;
    for (int i = 0; i < binStr.size(); i++) 
    {
        string temp = binStr;
        temp[i] = (temp[i] == '1') ? '0' : '1'; 

        long long num = stoll(temp, nullptr, 2); 
        vec_temp.push_back(num);
    }
    return vec_temp;
}

vector<long long> Find_ter(const string& terStr) {
    vector<long long> vec_temp;
    for (int i = 0; i < terStr.size(); i++) 
    {
        string temp1 = terStr, temp2 = terStr;

        if (terStr[i] == '0') {
            temp1[i] = '1'; 
            temp2[i] = '2';
        }
        else if (terStr[i] == '1') {
            temp1[i] = '0'; 
            temp2[i] = '2';
        }
        else if (terStr[i] == '2') {
            temp1[i] = '0'; 
            temp2[i] = '1';
        }
        // 각각 3진수로 변환하여 저장
        vec_temp.push_back(stoll(temp1, nullptr, 3));
        vec_temp.push_back(stoll(temp2, nullptr, 3));
    }
    return vec_temp;
}

int main() {
    string binStr, terStr;
    cin >> binStr >> terStr;

    vector<long long> vec_bin = Find_Bin(binStr);
    vector<long long> vec_ter = Find_ter(terStr);

    for (const auto& bin : vec_bin) 
    {
        for (const auto& ter : vec_ter) 
        {
            if (bin == ter)
            {
                cout << bin << endl;
                return 0;
            }
        }
    }

    return 0;
}