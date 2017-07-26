#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int ll;

int a[300000];
int s1[300000], s2[300000];
int c1, c2, last;
	
ll t, sum;

bool check(){
	if (sum>0)
		return true;
	if (sum==0){
		int t= min(c1,c2);
		for(int i=0;i<t;i++)
			if (s1[i]> s2[i])
				return true;
			else if (s1[i]< s2[i])
				return false;
		
		if (c1>c2)
			return true;
		if (c1==c2){
			return (last==1);
		}
	}
	return false;
}
int main(){
	int n, m, a, b, ans;
	cin >> n;
	sum= 0;
	c1= c2= 0;
	last = 0;
	memset(s1, 0, sizeof(s1));
	memset(s2, 0, sizeof(s2));
	
	for (int i=0;i<n;i++){
		cin >> t;
		sum+= t;
		if (i==n-1){
			if(t>0)
				last = 1;
			else 
				last = 2;
		}
		
		if (t>0)
			s1[c1++]= t;
		else
			s2[c2++]= -t;
		
	}
	
	if (check())
		printf("first\n");
	else 
		printf("second\n");
	return 0;
}
