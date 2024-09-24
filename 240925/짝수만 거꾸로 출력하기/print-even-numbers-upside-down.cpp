#include <iostream>
#include <vector>
using namespace std;

int main() {
     int count = 0;
    cin >> count;

    vector<int> vec;

    for (int i = 0; i < count; i++)
    {
        int temp = 0;
        cin >> temp;

        if (temp % 2 == 0)
            vec.push_back(temp);
    }

    for (int i = 0; i < vec.size(); i++)
        cout << *( vec.end() - i - 1) << " ";
    return 0;
}