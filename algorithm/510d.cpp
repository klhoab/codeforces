#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int l[1000], c[1000];

int gcd(int x,int y){
	if (y==0) return x;
	return gcd(y, x%y);
}

map<int, int> mp;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d", &l[i]);
	for(int i=0;i<n;i++)
		scanf("%d", &c[i]);
	
	int t= l[0];
	for(int i=1;i<n;i++){
		t= gcd(t,l[i]);
		//printf(".....%d\n",l[i]);
	}
	if (t!=1) printf("-1\n");
	else {
		mp[0]= 0;
		for(int i=0;i<n;i++){
			for(map<int,int>::iterator it= mp.begin(); it!= mp.end(); it++){
				int t= gcd(it->first, l[i]);
				if (mp.find(t)!=mp.end()) 
					mp[t]= min(mp[t], mp[it->first] + c[i]);
				else 
					mp[t]= mp[it->first] + c[i];
			}	
		}
		if (mp.find(1)==mp.end())
			printf("-1\n");
		else 
			printf("%d\n", mp[1]);
	}
	
	//int t= gcd(4921,2316);
	//printf("%d\n",t);
	return 0;
}
