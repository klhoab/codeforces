#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;
int a[100005], b[100005], index[100005], index2[100005];
int main(){
	int n,m,k;
	cin>> n>> m>>k;
	for(int i=0;i<n;i++) {
		cin >> a[i];
		index[a[i]]= i;
		index2[i]= a[i];
	}
	for(int i=0;i<m;i++) 
		cin >> b[i];
	
	
	long long int ans=0;
	for(int i=0;i<m;i++) {
		int t= index[b[i]];
		int page= t/ k+1;
		if (t> 0){
			index[b[i]]--;
			int who = index2[t-1];
			index[who]= t;
			index2[t-1]= b[i];
			index2[t]= who;
		}
		ans+= page;
	}
		
	cout << ans<< endl;
	return 0;
}
