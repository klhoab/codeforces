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

int a[10000];
int main(){
	int n, ans= 0;
	cin>> n;
	
	int t= 1;
	while (n>0){
		int cnt= n%10;
		for(int i=0;i<cnt;i++)
			a[i]+= t;
		t*=10;
		if (cnt>ans) ans= cnt;
		n/=10;
	}
	cout << ans<< endl;
	for(int i=0;i<ans;i++) 	
		cout << a[i] << " ";
	cout << endl;
	
	return 0;
}
