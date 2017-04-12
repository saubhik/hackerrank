#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[6][6];

    for (int i = 0; i < 6; i++)
		for(int j = 0; j < 6; j++)
			cin >> a[i][j];

    int hgsum = -9*36;
    for (int i = 0; i < 4; i++)
		for (int j = 1; j < 5; j++)
			hgsum = max(hgsum, a[i][j - 1] + a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 2][j - 1] + a[i + 2][j] + a[i + 2][j + 1]);

	cout << hgsum;	
}
