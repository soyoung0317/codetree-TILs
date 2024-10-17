#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
	int count = 0;
	cin >> count;

	vector<int> arr(count, 0);

	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}

	int max_index = arr.size();
	
	while (1) {
		int temp_index = 0;
		int max_num = INT_MIN;
		for (int i = 0; i < max_index; i++) {
			if (max_num < arr[i]) {
				max_num = arr[i];
				temp_index = i+1;
			}
		}
		cout << temp_index << " ";
		if (1 == temp_index)
			break;

		max_index = temp_index-1;
	}
    return 0;
}