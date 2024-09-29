#include <iostream>
#include <cmath>

using namespace std;

int main() {

	char word[6] = { 'L', 'E', 'B', 'R', 'O', 'S' };

	int idx = -1;

	// 문자 탐색
	for (int i = 0; i < 6; i++) {
		char temp;
		cin >> temp;
		if (temp == word[i]) {
			idx = i;
		}
	}

	if (idx == -1)
		cout << "None" << endl;
	else
		cout << idx << endl;

    return 0;
}