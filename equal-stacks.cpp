#include <iostream>
using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int heights1[n1], heights2[n2], heights3[n3], sum1 = 0, sum2 = 0, sum3 = 0;
	
	for (int i = 0; i < n1; i++) {
		cin >> heights1[i];
		sum1 += heights1[i];
	}
	for (int i = 0; i < n2; i++) {
		cin >> heights2[i];
		sum2 += heights2[i];
	}
	for (int i = 0; i < n3; i++) {
		cin >> heights3[i];
		sum3 += heights3[i];
	}
	
	int i = 0, j = 0, k = 0;
	while (! (sum1 == sum2 and sum2 == sum3)) {
		if (sum1 >= sum2 and sum1 >= sum3) {
			sum1 -= heights1[i];
			i++;
			continue;
		}
		if (sum2 >= sum3 and sum2 >= sum1) {
			sum2 -= heights2[j];
			j++;
			continue;
		}
		if (sum3 >= sum1 and sum3 >= sum2) {
			sum3 -= heights3[k];
			k++;
			continue;
		}
	}
	
	cout << sum1;
} 
