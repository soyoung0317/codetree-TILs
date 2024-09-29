#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, q, a;
    cin >> n >> q;

    int* ar = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int e, t, l;

    for (int i = 0; i < q; i++) {
        cin >> e >> t;
        if (e == 1) {
            cout << ar[t - 1] << endl;
        }

        if (e == 2) {
            int cnt = 0;

            for (int u = 0; u < n; u++) {
                if (ar[u] == t) {
                    cnt++;
                    cout << u + 1 << endl;
                    break;
                }
            }
            if (cnt == 0) {
                cout << 0 << endl;
            }
        }

        if (e == 3) {
            cin >> l;
            for (int k = t - 1; k < l; k++) {
                cout << ar[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}