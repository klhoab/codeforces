#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef long long int ll;

int main(){
	ll n, sum=0;
	cin >> n;
	
	sum  = n;
	ll t = 10;
	for(int i=0;i<=9;i++){
		if (n- t>= 0){
			sum+= (n-t +1);
		}
		t*=10;
	}
	cout << sum << endl;
	return 0;
	
}
