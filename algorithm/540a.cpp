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
char s1[1005],s2[1005];

int main(){
	int n; 
	cin>> n>> s1>> s2;
	
	int ans= 0;
	for(int i=0;s1[i];i++){
		int t1= s1[i]- '0';
		int t2= s2[i]- '0';
		int d= 0;
		if (t1>t2) d= t1-t2;
		else d= t2-t1;
		
		ans+= min(10-d, d);
	}
	cout << ans << endl;
	return 0;
}
