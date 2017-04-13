#include <iostream>
#include <vector>
using namespace std;

int main() {
    long n, m;
    cin >> n >> m;
    
    vector<long> arr(n, 0);
    
    long a, b, k;
    while (m--) {
        cin >> a >> b >> k;
        arr[a - 1] += k;
        if (b < n) arr[b] -= k;
    }
    
    long max = 0, x = 0;
    for (long i = 0; i < n; i++) {
        x += arr[i];
        if (x > max) max = x;
    }
    
    cout << max;
}
