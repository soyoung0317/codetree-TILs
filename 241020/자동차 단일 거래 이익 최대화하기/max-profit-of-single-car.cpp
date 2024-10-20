#include <iostream>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int year = 0;
    cin >> year;

    int* price = new int[year];

    for(int i = 0 ; i < year ; i++){
        cin >> price[i];
    }

    int sup_gap = INT_MIN;
    for(int i = 0 ; i < year ; i++){
        for(int j = i+1 ; j < year ; j++) 
        {
        int price_gap = price[j] - price[i];
        sup_gap = max(price_gap, sup_gap);
        }
    }
    if(sup_gap < 0)
        cout << 0 << endl;
    else
        cout << sup_gap << endl;

    return 0;
}