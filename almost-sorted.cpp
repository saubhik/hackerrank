#include <iostream>
#include <string>
//#include <fstream>
using namespace std;

string printString;

bool almostSorted (int a[], int n) {
	
	bool leftSwitch = false;
	int left, right;
	
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			if (!leftSwitch) {
				leftSwitch = true;
				left = i-1;
			}
			else {
				right = i;
				break;
			}
		}
	}
	
	bool ordered = true;
	
	for (int i = 0; i < n; i++) {
		if (i == left) {
			if ((i > 0 and a[right] > a[i-1]) and (i < n-1 and a[right] < a[i+1])) continue;
			else {
				ordered = false;
				break;
			}
		}
		else if (i == right) {
			if ((i > 0 and a[left] > a[i-1]) and (i < n-1 and a[left] < a[i+1])) continue;
			else {
				ordered = false;
				break;
			}
		}
		else if (i-1 != left and i != right and a[i] < a[i-1]) {
			ordered = false;
			break;
		}
	}
	
	if (ordered) {
		printString = "swap " + to_string(left+1) + " " + to_string(right+1);
		return true;
	}
	
	bool decSwitch = false, buffer = false;
	int decLeft, decRight;

	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			if (!decSwitch) {
				decSwitch = true;
				decLeft = i-1;
			}
			decRight = i;
			if ((decLeft > 0 and a[decLeft - 1] > a[decRight]) or
				(decRight < n and a[decRight + 1] > a[decRight] and a[decRight + 1] < a[decLeft]) or
				buffer)
				return false;
			else {
				if (decRight - decLeft < 3) printString = "swap " + to_string(decLeft+1) + " " + to_string(decRight+1);
				else printString = "reverse " + to_string(decLeft+1) + " " + to_string(decRight+1);
			}
		}
		else {
			if (decSwitch) {
				decSwitch = false;
				buffer = true;
			}
		}		
	}
	
	return true;
}

int main() {
	//fstream fin("testcase.txt");
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	if (almostSorted(a, n)) cout << "yes\n" << printString;
	else cout << "no";	
}
