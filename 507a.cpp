#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int a[105];

int main(){
	int n, k, t;
	vector<pair<int, int> > v;
	
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin>> t;
		v.push_back(make_pair(t, i+1) );
	}
	sort(v.begin(), v.end());
	
	int sum= 0, c=0;
	for(int i=0;i<n;i++){
		if (sum+v[i].first> k) break;
		sum+= v[i].first;
		c++;
	}
	cout << c << endl;
	for(int i=0;i<c;i++){
		if (i== c-1)
			cout << v[i].second << endl;
		else 
			cout << v[i].second << " ";
	}
	return 0;
}
