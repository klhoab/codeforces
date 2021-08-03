#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b ;
	
	int ans = a/2 + a%2;
	if (ans%b!= 0)
		ans+= b- ans%b;
	if (a<b)
		cout << "-1" << endl;
	else 
		cout << min(ans, a) << endl;
	return 0;
}
