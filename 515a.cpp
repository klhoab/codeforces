#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

typedef long long int ll;

ll a,b,c;

int main(){
	ios_base::sync_with_stdio(false);
	
	cin >> a >> b>> c;
	if (a<0) a= -a;
	if (b<0) b= -b;
	
	if ((c>=a+b) && (a+b-c)%2==0) puts("Yes");
	else puts("No");
	
	return 0;
}
