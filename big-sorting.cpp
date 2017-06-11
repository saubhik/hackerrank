#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string left, string right) {
    if (left.length() == right.length()) return left < right;
    else return left.length() < right.length();
    
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++) {
       cin >> unsorted[unsorted_i];
    }
    
    sort(unsorted.begin(), unsorted.end(), cmp);
    
    for(int sorted_i = 0; sorted_i < n; sorted_i++) {
        cout << unsorted[sorted_i] << "\n";
    }
    
    return 0;
}
