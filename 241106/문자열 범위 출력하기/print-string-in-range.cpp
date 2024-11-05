#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str = "";
    getline(cin, str);

    string answer = "";

    for (int i = 2; i < 10; i++){
        answer += str[i];
    }

    cout << answer << endl;

    return 0;
}