#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<string, int> myMap;
  while (n--) {
    string s;
    cin >> s;
    myMap[s]++;
  }
  
  int q;
  cin >> q;
  while (q--) {
    string s;
    cin >> s;
    cout << myMap[s] << endl;
  }
}
