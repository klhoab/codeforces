#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;


vector<pair<int, int> > v;
vector<int> ans;
int idx[200005];

int main(){
	int t, n, mx;
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t;
		v.push_back(make_pair(t, i+1));
	}
	sort(v.begin(), v.end());
	
	for(int i=0;i<n;i++)
		idx[i] = -1;
	
	for(int i=0;i<n;i++){
		int t= v[i].first;
		mx= t;
		idx[t]= i;
		while (i+1<n && v[i+1].first== v[i].first) i++;
	}
	
	mx++;
	
	int p, cnt, total;
	p= cnt= total= 0;
	while (ans.size()< n){
		cnt= 0;
		for(int i= p; i<mx; i++){
			int t= idx[i];
			
			if (t==-1){
				break;
			}
			ans.push_back( v[t].second );
			if (t+1<n&& v[t+1].first== i) idx[i]++;
			else idx[i]= -1;
			
			cnt++;
		}
		p = (p+cnt)-3;
		
		if (p<0) break;
	}
	
	if (ans.size()!= n){		
		cout << "Impossible" << endl;
		return 0;
	}
	
	cout << "Possible" << endl;
	for(int i=0;i<n;i++)
		cout << ans[i] << " ";
	cout << endl;
	return 0;
}
