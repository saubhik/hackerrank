#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  
  vector<vector<int> > seqList(n);
  
  int a, x, y, lastAns = 0;
  while (q--) {
    cin >> a >> x >> y;
    int ind = (x ^ lastAns) % n;
    
    if (a == 1) {
      seqList[ind].push_back(y);
    }
    else {
      int length = (int)seqList[ind].size();
      lastAns = seqList[ind][y % length];
      cout << lastAns << "\n";
    }
  }
}
