#include <iostream>
#include <algorithm>
using namespace std;
typedef long long int ll;

ll a[100006];
int main(){
	ll n; 	
	
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> a[i] ;
	
	sort(a,a+n);
	ll sum = 0, ans= 0;
	for(int i=0;i<n;i++){
		if (sum<= a[i]){
			sum+= a[i];
			ans++;
		}
	}
	cout << ans << endl;
	
	return 0;
}
