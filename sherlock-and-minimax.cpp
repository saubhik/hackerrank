#include <iostream>
#include <algorithm>
#include <climits>
#include <cstdlib>
using namespace std;

int n, minDiff, maxMinDiff = -1, minNum, a[101];

void check(int elem) {
    minDiff = INT_MAX;
    for (int i = 0; i < n; i++) minDiff = min(minDiff, abs(elem - a[i]));
    if (minDiff > maxMinDiff) {
        maxMinDiff = minDiff;
        minNum = elem;
    }
    return;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];

    int P, Q;
    cin >> P >> Q;
    check(P);

    int elem;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            elem = (a[i] + a[j]) / 2;
            if (P <= elem and elem <= Q) {
                check(elem);
            }
        }
    }

    check(Q);

    cout << minNum << "\n";
}
