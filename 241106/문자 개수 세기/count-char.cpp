#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str = "";
    getline(cin, str);

    char cmp;
    cin >> cmp;

    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        str[i] == cmp ? count++ : 0;
    }

    cout << count << endl;
    return 0;
}