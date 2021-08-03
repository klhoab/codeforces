#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
	int a, b, c, sol;
	cin >> a >> b >> c;
	
	sol = a+ b+c;
	sol = max( sol , a*b*c);
	sol = max( sol , a*b+c);
	sol = max( sol , a*(b+c));
	sol = max( sol , a+(b*c));
	sol = max( sol , (a+b)*c);
	
	cout << sol << endl;
	return 0;
}
