#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.	
    int count = 0;
	cin >> count;

	vector<int> arr(1000, 0);

	for (int i = 0; i < count; i++) {
		int temp = 0;
		cin >> temp;

		arr[temp] += 1;
	}

	int max_num = INT_MIN;
	for (int i = 0; i < 1001; i++) {
		if (arr[i] == 1) 
			max_num = max(max_num, i);
	}

	if (max_num == INT_MIN)
		cout << -1 << endl;
	else
		cout << max_num << endl;

    return 0;
}