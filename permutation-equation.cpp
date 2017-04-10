#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[n];
    for (int  i = 0; i < n; i++) cin >> p[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[j] == i) {
                for (int k = 0; k < n; k++) {
                    if (p[k] == j+1) {
                        cout << k+1 << endl;
                        break;
                    }
                }
                break;
            }
        }
    }
}
