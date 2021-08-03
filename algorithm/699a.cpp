#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
	int n, x[200005]; string s;
	int ans= -1, right= -1;
	cin >> n >> s;
	for (int i=0; i< n; i++) cin >> x[i];

	for (int i=0; i< n; i++) {
		if (s[i]=='R'){
			right= i;
		}
		else if (right!= -1){
			int t= (x[i]- x[right])/ 2;
			if (ans==-1|| ans > t) ans= t;
			right = -1;
		}
	}
	cout << ans << endl;
	return 0;
}
