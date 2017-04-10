#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t, x, y, z;
	cin >> t;
	
	while (t--) {
		cin >> x >> y >> z;
		if (abs(x - z) < abs(y - z)) cout << "Cat A";
		else if (abs(x - z) > abs(y - z)) cout << "Cat B";
		else cout << "Mouse C";
		cout << endl;
	}
}
