#include <iostream>
#include <vector>
using namespace std;

long n;
long med;

void partition(long a[], vector<long> left, vector<long> right, long elem) {
    vector<long>::iterator it;   
    if (left.size() == right.size()) {
        med = elem;
        return;
    }    
    else if (left.size() > right.size()) {
        long nelem = left.back();
        left.pop_back();
        for(it = left.begin(); it != left.end();) {
            if (nelem < *it) {
                right.push_back(*it);
                it = left.erase(it);
            }
            else ++it;
        }
        if (nelem < elem) right.push_back(elem);
        else left.push_back(elem);
        partition(a, left, right, nelem);
    }
    else {
        long nelem = right.back();
        right.pop_back();
        for (it = right.begin(); it != right.end();) {
            if (nelem > *it) {
                left.push_back(*it);
                it = right.erase(it);
            }
            else ++it;
        }
        left.push_back(elem);
        partition(a, left, right, nelem);
    }
}


long findMedian(long a[]) {
    vector<long> left, right;
    for (long i = 1; i < n; i++)
        right.push_back(a[i]);
    partition(a, left, right, a[0]);
    return med;
}

int main() {
    cin >> n;
    long a[n];
    for (long i = 0; i < n; i++) cin >> a[i];
    cout << findMedian(a);
}
