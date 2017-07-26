#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;
int n,m,a,b,t;
string s;
vector<int> v;

// void split(int x){
	// for(int i=2;x>=2;i++)
		// while (x%i==0){
			// v.push_back(i);
			// x/=i;
		// }
	// if (x>2) v.push_back(x);
// }
// void split2(int x){
	// for(int i=2;i<=x;i++)
		// split(i);
// }

void split(int x){
	if (x==2 ||x==3||x==5||x==7) v.push_back(x);
	if (x==4){ split(3);split(2);split(2);}
	if (x==6){ split(5);split(3);}
	if (x==8){ split(7);split(2);split(2);split(2);}
	if (x==9){ split(7);split(2);split(3);split(3);}
}
int main(){
	ios_base::sync_with_stdio(false);
	
	cin>> n >> s;
	for(int i=0;s[i];i++)
		if (s[i]>='0'&& s[i]<='9')
			split(s[i]-'0');
	sort(v.begin(), v.end(), greater<int>());
	for(int i=0;i<v.size();i++)
		cout << v[i];
	cout << endl;
	return 0;
}
