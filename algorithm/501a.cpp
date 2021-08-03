#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b>> c>> d;
	int t1= max(3*a*100, 1000*a-4*a*c);
	int t2= max(3*b*100, 1000*b-4*b*d);
	if (t1>t2)
		puts("Misha");
	else if (t1<t2)
		puts("Vasya");
	else
		puts("Tie");
	return 0;
}
