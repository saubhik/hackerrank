#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int candles[n], max = 0, count = 0;
    for (int i = 0; i < n; i++) {
        cin >> candles[i];
        if (candles[i] > max)
            max = candles[i];
    }
    for (int i = 0; i < n; i++)
        if (candles[i] == max)
            count++;
    
    cout << count;   
}
