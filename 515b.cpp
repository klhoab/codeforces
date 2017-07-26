#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
int n,m,a,b,t;
bool hx[105], hy[105];

void sim(){
	for(int i=0;i<100000;i++)	{
		bool res= hx[i%n] || hy[i%m];
		hx[i%n]= hy[i%m]= res;
	}
}
bool check(){
	for(int i=0;i<n;i++)
		if(hx[i]==0) return false;
	for(int i=0;i<m;i++)
		if(hy[i]==0) return false;
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	
	cin >> n>>m;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>> t;
		hx[t]= 1;
	}
	cin>>b;
	for(int i=0;i<b;i++){
		cin>> t;
		hy[t]= 1;
	}
	sim();
	if (check()) puts("Yes");
	else puts("No");
	
	return 0;
}
