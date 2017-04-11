#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<long, long> p1, pair<long, long> p2) {
	return p1.first < p2.first;
}

//Merging Overlapping Intervals
vector<pair<long, long> > merge(vector<pair<long, long> > v) {
	vector<pair<long, long> > vans;
	vector<pair<long, long> > :: iterator it1, it2;
	sort(v.begin(), v.end(), cmp);
	vans.push_back(*v.begin());
	it1 = v.begin() + 1;
	it2 = vans.begin();
	for (; it1 != v.end(); ++it1) {
		long f = it1->first, s = it1->second, ps = it2->second;
		if (f <= ps) it2->second = max(it2->second, s);
		else {
			vans.push_back(*it1);
			++it2;
		}
	}
	return vans;
}

int main() {
	long n, m, k;
	cin >> n >> m >> k;
	
	map<long, vector<pair<long, long> > > train;
	long r, c1, c2;
	for (int i = 0; i < k; i++) {
		cin >> r >> c1 >> c2;
		train[r].push_back(make_pair(c1, c2));
	}
	
	long long count = 0;
	map<long, vector<pair<long, long> > > :: iterator t;
	for (t = train.begin(); t != train.end(); ++t) {
		t->second = merge(t->second);	
		vector<pair<long, long> > v = t->second;
		for (pair<long, long> p : v)
			count += p.second - p.first + 1;
	}
	
	cout << n * m - count;
}
