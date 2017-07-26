#include <iostream>
#include <algorithm>
using namespace std;
int a[3005];

int main(){
	int n, ans, last;
	cin >> n;
	for (int i=0;i<n;i++)
		cin >> a[i];
		
	sort(a, a+n);
	ans= 0; last= a[0];
	for(int i=1;i<n;i++){
		if (a[i]<= last) 
			ans += last - a[i]+ 1;
		last= max(a[i], last+1);
	}
	cout << ans<< endl;
	return 0;
}
