#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    	int count = 0;
	cin >> count;

	int* arr = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + count, greater<int>());

	int answer = INT_MIN;
	int before = arr[0];
	for (int i = 0; i < count; i++) {
		if (arr[i] > answer)
			answer = arr[i];
		
		if (i > 1)
			before == arr[i] ? answer = -1 : before = arr[i];
	}

	cout << answer << endl;

    return 0;
}