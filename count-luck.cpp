#include <iostream>
using namespace std;

int countLuck = 0, n, m;
char grid[101][101];

bool limits(int i, int j) {
    if (0 <= i and i <= n-1 and 0 <= j and j <= m-1) return true;
    else return false;
}

bool luckPoint(int i, int j) {
    int ways = 0;
    if (limits(i,j+1) and (grid[i][j+1] == '.' or grid[i][j+1] == '*')) ways++;
    if (limits(i-1,j) and (grid[i-1][j] == '.' or grid[i-1][j] == '*')) ways++;
    if (limits(i,j-1) and (grid[i][j-1] == '.' or grid[i][j-1] == '*')) ways++;
    if (limits(i+1,j) and (grid[i+1][j] == '.' or grid[i+1][j] == '*')) ways++;
    
    if (ways > 1) return true;
    else return false;
}

void go(int i, int j, int count) {
    if (grid[i][j] == '*') {
        countLuck = count;
        return;
    }
    grid[i][j] = 'V'; // Visited
    if (luckPoint(i,j)) count++;
    if (limits(i,j+1) and (grid[i][j+1] == '.' or grid[i][j+1] == '*')) go(i, j+1, count);
    if (limits(i-1,j) and (grid[i-1][j] == '.' or grid[i-1][j] == '*')) go(i-1, j, count);
    if (limits(i,j-1) and (grid[i][j-1] == '.' or grid[i][j-1] == '*')) go(i, j-1, count);
    if (limits(i+1,j) and (grid[i+1][j] == '.' or grid[i+1][j] == '*')) go(i+1, j, count);
    return;
}

int main() {
    int t;
    cin >> t;
    int k, istart, jstart;

    while (t--) {
        countLuck = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
                if (grid[i][j] == 'M') {
                    istart = i;
                    jstart = j;
                }
            }
        }
        cin >> k;
        
        go(istart, jstart, 0);
        if (k == countLuck) cout << "Impressed\n";
        else cout << "Oops!\n";
    }
}
