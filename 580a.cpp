#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int curr, prev, mx, cnt;
	
	cin >> prev;
	cnt= mx= 1;
	for (int i=1;i<n;i++){
		cin >> curr;
		if (curr >= prev){
			if (++cnt> mx) 
				mx= cnt;
		}
		else { cnt= 1;}
		prev= curr;
	}
	cout << mx << endl;
	return 0;
	
}
