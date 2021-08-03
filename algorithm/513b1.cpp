#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;

long long int a[1000],s[1000];

long long int n, m;

long long int f(long long int *a){
	long long int sum= 0;
	for(long long int i=0;i<n;i++)
		for(long long int j=i;j<n;j++)
			sum+= *min_element(a+i, a+j+1);
	return sum;	
}

void f(long long int m, long long int n, long long int l, long long int r, long long int curr){
	long long int t= 1LL<< (n-2);
	if (n==1)
		s[l]= curr;
	else if (m<t){
		s[l]= curr;
		f(m, n-1, l+1, r, curr+1);
	}
	else{
		s[r]= curr;
		f(m-t, n-1, l, r-1, curr+1);
	}
}
int main(){	
	scanf("%lld%lld",&n,&m);
	f(m-1,n,0,n-1,1);
	for(long long int i=0;i<n;i++)
		printf("%lld ", s[i]);
	printf("\n");
	return 0;
}
