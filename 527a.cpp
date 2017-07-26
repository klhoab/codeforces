#include <iostream>
using namespace std;

typedef long long int ll;

ll f(ll x, ll y){
	if (y== 1) return x;
	if (y== 0) return 0;
	return x/y + f(y, x%y);
}
int main(){
	ll x, y;
	cin >> x >> y;
	cout << f(x, y) << endl;
	return 0;
}
