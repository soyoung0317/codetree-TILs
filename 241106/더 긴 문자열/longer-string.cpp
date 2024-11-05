#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str_a = "", str_b = "";
    cin >> str_a >> str_b;

    if(str_a.length() > str_b.length())
        cout << str_a << " "<< str_a.length() << endl;
    else if (str_a.length() < str_b.length())
        cout << str_b << " "<< str_b.length() << endl;
    else
        cout << "same" << endl; 

    return 0;
}