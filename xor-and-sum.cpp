#include <iostream>
using namespace std;

#define MOD 1000000007
#define MAX 1000000

int main() {
    string a, b;
    cin >> a >> b;
    
	long N = a.length(), M = b.length(), ti, n = 314159;
    long firstNumber[MAX] = {0}, cumulativeOnesSecondNumber[MAX] = {0};

    for (int i = 0; i < MAX; i++) {
        if (i < M and b[M - i - 1] == '1') cumulativeOnesSecondNumber[i] = 1;
        if (i > 0) cumulativeOnesSecondNumber[i] = (cumulativeOnesSecondNumber[i] + cumulativeOnesSecondNumber[i-1]) % MOD;
    }
    
    long sum = 0, multiplier = 1;
    for (int i = 0; i < MAX; i++) {
        
        if (i < N and a[N - i - 1] == '1') firstNumber[i] = 1;

        if (i > n) ti = cumulativeOnesSecondNumber[i] - cumulativeOnesSecondNumber[i - n - 1];
        else ti = cumulativeOnesSecondNumber[i];

        if (firstNumber[i] == 1) {
            sum = (sum + (multiplier * (n + 1 - ti)) % MOD) % MOD;
            multiplier = (multiplier * 2) % MOD;
        }
        else {
            sum = (sum + (multiplier * ti) % MOD) % MOD;
            multiplier = (multiplier * 2) % MOD;
        }
    }
    cout << sum << endl;
}
