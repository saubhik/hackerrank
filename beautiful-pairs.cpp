#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a, a + n);
    sort(b, b + n);
    
    int jstart = 0, count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = jstart; j < n; j++) {
            if (a[i] == b[j]) {
                count++;
                jstart = j + 1;
                break;
            }
            if (b[j] > a[i]) break;
        }
    }
    
    cout << ((count < n) ? (count + 1) : (count - 1));
}
