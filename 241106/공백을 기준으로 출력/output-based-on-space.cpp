#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str_a, str_b;
    getline(cin, str_a);
    getline(cin, str_b);

    string answer = "";

    for (auto c : str_a)
        if (c != ' ')
            answer += c;

    for (auto c : str_b)
        if (c != ' ')
            answer += c;

    cout << answer << endl;

    return 0;
}