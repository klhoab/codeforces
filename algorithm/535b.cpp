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

int a[10], b[10];
int d[100];
int main(){

	int n, t, len, ans= 0;
	
	a[1]= 0;
	a[2]= b[2]= 2;
	for(int i=3;i<10;i++){
		a[i]= a[i-1]*2;
		b[i]= b[i-1]+ a[i];
	}
	
	cin >> n;
	
	t= n; len = 0;
	while (t>0){
		t/=10;
		++len;
	}
	 
	int cnt= 0;
	while (n>0){
		int t= n%10;
		if (t==4) d[cnt++]= 0;
		if (t==7) d[cnt++]= 1;
		n/= 10;
	}
	
	ans= 0;
	for(int i=cnt-1;i>=0;i--)
		ans= ans* 2+ d[i];
		
	ans+= b[len]+1;
	
	cout << ans << endl;
	
	
		
	return 0;
}
