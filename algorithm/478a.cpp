#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
	int a,b,c,d,e;
	cin >> a >> b  >>c >>d >>e;
	
	int sum= a+b+c+d+e;
	if (sum%5== 0 && sum>0)
		cout << sum/5 << endl;
	else 
		cout << "-1" << endl;
	return 0;
}
