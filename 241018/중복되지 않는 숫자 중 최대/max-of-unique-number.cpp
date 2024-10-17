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

		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j])
			{
				arr[i] = -1;
				arr[j] = -1;
			}
		}
	}

	sort(arr, arr + count, greater<int>());

	cout << arr[0] << endl;

    return 0;
}