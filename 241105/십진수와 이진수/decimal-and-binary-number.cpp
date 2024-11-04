#include <iostream>
#include <string>

using namespace std;

int main() {
    string temp;
    cin >> temp;

    long long number = stoll(temp, nullptr, 2) * 17;

    string binary = "";

    while (number >=1) 
    {
        binary = (number % 2 == 0 ? "0" : "1") + binary; 
        number /= 2;
    }

    if (binary == "") 
        binary = "0";

    cout << binary << endl;  

    return 0;
}