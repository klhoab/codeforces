#include <iostream>
using namespace std;
const int inf = 1e5;

int a[105];
int main(){
	int n, ans= 0; cin>> n;
	for (int i=0;i<n;i++) 
		cin >> a[i];
	
	int mi= 0;
	
	while (1){
		mi= 0;
		for (int i=1;i<n;i++){
			if (a[i]>= a[mi]) mi= i;
		}
		if (mi== 0) break;
		ans++; a[0]++; a[mi]--;
	}
	cout << ans << endl;
	
	return 0;
}

