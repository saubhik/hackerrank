#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool connected(pair <pair <int, int>, int> p1, pair <pair <int, int>, int> p2) {
	pair <int, int> left1, right1, up1, down1, left2, right2, up2, down2, center1, center2;
	
	center1 = p1.first;
	left1 = make_pair(p1.first.first, p1.first.second - p1.second);
	right1 = make_pair(p1.first.first, p1.first.second + p1.second);
	up1 = make_pair(p1.first.first - p1.second, p1.first.second);
	down1 = make_pair(p1.first.first + p1.second, p1.first.second);
	
	center2 = p2.first;
	left2 = make_pair(p2.first.first, p2.first.second - p2.second);
	right2 = make_pair(p2.first.first, p2.first.second + p2.second);
	up2 = make_pair(p2.first.first - p2.second, p2.first.second);
	down2 = make_pair(p2.first.first + p2.second, p2.first.second);
	
	if (center2.second <= right1.second and center2.second >= left1.second and
		up2.first <= center1.first and down2.first >= center1.first)
		return true;
	
	if (center2.first >= up1.first and center2.first <= down1.first and
		left2.second <= center1.second and right2.second >= center1.second)
		return true;
		
	if (center1.second == center2.second and (down2.first >= up1.first or up2.first <= down1.first))
		return true;
	
	if (center1.first == center2.first and (right2.second >= left1.second or left2.second <= right1.second))
		return true;
		
	return false;
}
	
int main() {
	int n, m;
	cin >> n >> m;
	
	char grid[n][m];
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> grid[i][j];
		}
	}
	
	vector <pair <pair <int, int>, int> > store;
	
	int count, left, right, up, down;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (grid[i][j] == 'G') {
				count = 0;
				left = j - 1, right = j + 1, up = i - 1, down = i + 1;
				while (1) {
					if (left < 0 or right > m - 1 or up < 0 or down > n - 1) break;
					if (grid[i][left] == 'G' and 
						grid[i][right] == 'G' and
						grid[up][j] == 'G' and
						grid[down][j] == 'G')
							count ++;
							left --;
							right ++;
							up --;
							down ++;
				}
				store.push_back(make_pair(make_pair(i, j), count));
			}
		}
	}
	
	int maxArea = 0, tempArea;
	for (size_t i = 0; i < store.size(); ++i) {
		for (size_t j = i + 1; j < store.size(); ++j) {
			if (!connected(store[i], store[j])) {
				tempArea = 	(4 * store[i].second + 1) * (4 * store[j].second + 1);
				if (tempArea > maxArea) maxArea = tempArea;
			}
		}
	}
	
	cout << maxArea;
}
