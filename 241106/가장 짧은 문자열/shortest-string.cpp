#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str_a, str_b, str_c;
    cin >> str_a >> str_b >> str_c;
    
    int len_a = str_a.length();
    int len_b = str_b.length();
    int len_c = str_c.length();

    cout << max({ len_a, len_b, len_c }) - min({ len_a, len_b, len_c }) << endl;
    return 0;
}