#include <iostream>
using namespace std;

int main() {
	long t, b, w, x, y, z, cost;
	cin >> t;
	
	while (t--) {
		cin >> b >> w;
		cin >> x >> y >> z;
		if (x < (y + z)) cost = b * x;
		else cost = b * (y + z);
		if (y > (x + z)) cost += w * (x + z);
		else cost += w * y;
		cout << cost << endl;
	}
}
