#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    getline(cin, str); 

    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str.size() << endl;
    return 0;
}