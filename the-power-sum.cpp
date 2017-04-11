#include <iostream>
#include <cmath>
using namespace std;

int k, count = 0;

void powsum(int n, int i) {
    if (n == 0) count++;
	if (n < 0) return;
	
    int n2 = 0;
    for (int j = i; n2 >= 0; ++j) {
        n2 = n - (int)pow(j, k);
        powsum(n2, j + 1);
    }
    
    return;
}

int main() {
	int r;
    cin >> r >> k;
    powsum(r, 1);
    cout << count;
}
