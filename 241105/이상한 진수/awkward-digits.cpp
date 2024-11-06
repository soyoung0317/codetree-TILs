#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
   
    string str_bin, str_ter;
    cin >> str_bin >> str_ter;

    vector<string> vec_str_bin;
    vector<string> vec_str_ter;

    for (int i = 0; i < str_bin.size(); i++)
    {
        // 한글자씩 바꾸기 
        string temp = str_bin;
        temp[i] = (temp[i] == '1' ? '0' : '1');

        long long sum = 0;
        for (int j = 0; j < str_bin.size(); j++)
        {
            sum += (temp[j] - '0') * pow(2, str_bin.size() - j - 1);
        }
        
        vec_str_bin.push_back(to_string(sum));
    }

    for (int i = 0; i < str_ter.size(); i++)
    {
        // 한글자씩 바꾸기 
        string str_temp1 = str_ter, str_temp2 = str_ter;
        switch (str_ter[i])
        {
        case '0':
            str_temp1[i] = '1';
            str_temp2[i] = '2';
            break;
        case '1':
            str_temp1[i] = '0';
            str_temp2[i] = '1';
            break;
        case '2':
            str_temp1[i] = '0';
            str_temp2[i] = '1';
            break;
        }

        long long sum_1 = 0;
        long long sum_2 = 0;
        for (int j = 0; j < str_ter.size(); j++)
        {
            sum_1 += (long long)(str_temp1[j] - '0') * pow(3, str_ter.size() - j - 1);
            sum_2 += (long long)(str_temp2[j] - '0') * pow(3, str_ter.size() - j - 1);
        }

        vec_str_ter.push_back(to_string(sum_1));
        vec_str_ter.push_back(to_string(sum_2));
    }

    for (int i = 0; i < str_bin.size(); i++)
    {
        string comp_1 = vec_str_bin[i];

        for (int j = 0; j < str_ter.size() * 2; j++)
        {
            string comp_2 = vec_str_ter[j];

            if (comp_1 == comp_2)
                cout << comp_1 << endl;
        }

    }
    return 0;
}