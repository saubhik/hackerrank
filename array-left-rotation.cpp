#include <iostream>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  
  for (int count = 0, i = d; count < n; count++, i = (i + 1) % n)
    cout << a[i] << " ";
}
