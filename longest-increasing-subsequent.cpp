#include <iostream>
#include <vector>
using namespace std;

int getCeilIndex(int i, vector<int> &indexList, int arr[], int left, int right) {
	while (right - left > 1) {
		int middle = left + (right - left) / 2;
		if (arr[i] > arr[indexList[middle]]) left = middle;
		else right = middle;
	}
	if (arr[i] == arr[indexList[left]]) return left;
    else return right;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	
	int len = 1, pos;
	vector<int> endIndices(n, 0);
	for (int i = 1; i < n; i++) {
				
		if (arr[i] < arr[endIndices[0]]) endIndices[0] = i;
		
		else if (arr[i] > arr[endIndices[len - 1]]) endIndices[len++] = i;
		
		else {
			pos = getCeilIndex(i, endIndices, arr, 0, len - 1);
			endIndices[pos] = i;
		}
	}
	
	cout << len << endl;	
}
