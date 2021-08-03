#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int v[100005];
int main(){
	int a, m;
	cin >> a >> m;
	memset(v, 0, sizeof(v));
	
	while (!v[a%m]){
		v[a%m] = 1;
		if (a%m==0){
			cout << "Yes" << endl;
			return 0;
		}
		a+= a%m;
	}
	cout << "No" << endl;
	
	return 0;
}
