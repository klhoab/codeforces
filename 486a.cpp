#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	if (n%2==0)
		cout << n/2 << endl;
	else 
		cout << n/2-n << endl;
	return 0;
}
