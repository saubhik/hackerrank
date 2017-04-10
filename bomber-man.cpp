#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int r, c, n;
	cin >> r >> c >> n;
	
	char grid[r][c], newGrid[r][c];
	memset(newGrid, 'O', sizeof(newGrid));
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> grid[i][j];
		}
	}
    
    if (n == 1) {
       for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << grid[i][j];
			}
			cout << endl;
		}
        return 0; 
    }
	
	if (n % 2 == 0) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << newGrid[i][j];
			}
			cout << endl;
		}
        return 0;
	}
	
	if (n % 4 == 3) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (grid[i][j] == 'O') {
					if (i - 1 >= 0) newGrid[i - 1][j] = '.';
					if (i + 1 < r) newGrid[i + 1][j] = '.';
					if (j - 1 >= 0) newGrid[i][j - 1] = '.';
					if (j + 1 < c) newGrid[i][j + 1] = '.';
					newGrid[i][j] = '.';
				}
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << newGrid[i][j];
			}
			cout << endl;
		}
        return 0;
	}
	
	if (n % 4 == 1) {
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (grid[i][j] == 'O') {
					if (i - 1 >= 0) newGrid[i - 1][j] = '.';
					if (i + 1 < r) newGrid[i + 1][j] = '.';
					if (j - 1 >= 0) newGrid[i][j - 1] = '.';
					if (j + 1 < c) newGrid[i][j + 1] = '.';
					newGrid[i][j] = '.';
				}
			}
		}
		memset(grid, 'O', sizeof(grid));
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				if (newGrid[i][j] == 'O') {
					if (i - 1 >= 0) grid[i - 1][j] = '.';
					if (i + 1 < r) grid[i + 1][j] = '.';
					if (j - 1 >= 0) grid[i][j - 1] = '.';
					if (j + 1 < c) grid[i][j + 1] = '.';
					grid[i][j] = '.';
				}
			}
		}
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << grid[i][j];
			}
			cout << endl;
		}
        return 0;
	}
}
