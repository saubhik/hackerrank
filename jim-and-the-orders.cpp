#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
// #include <fstream>
using namespace std;

int main() {
    // fstream fin("/home/saubhik/problems/jim-and-the-orders-testcases/input/input01.txt");
    // fstream fout("output.o");
    
    int n, ti, di;
    // fin >> n;
    cin >> n;

    vector<pair<int, int> > end_times;
    for (int i = 1; i <= n; i++) {
        // fin >> ti >> di;
        cin >> ti >> di;
        end_times.push_back(make_pair(ti + di, i));
    }
   
   sort(end_times.begin(), end_times.end());
   
   vector<pair<int, int> >::iterator it;
   for (it = end_times.begin(); it != end_times.end(); ++it) {
       if (it == end_times.begin()) {
           // fout << it->second;
           cout << it->second;
       }
       else {
           // fout << " " << it->second;
           cout << " " << it->second;
       }
   }
   
   // fin.close();
   // fout.close();
}
