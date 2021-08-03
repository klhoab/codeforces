#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int a[100005];

int main(){
	int n, k, m, prev, curr, sum, cnt;
	cin >> n >> k;
	
	sum= 0;
	for (int i=0;i<k;i++){
		cin >> m;
		for (int j=0;j<m;j++)
			cin >> a[j];
		
		if (a[0]!= 1)
			sum+= 1+ (m-1)*2;
		else {			
			int t= 0;
			for(int j=1;j<m;j++){
				if (a[j]!= a[j-1]+1) {
					t = j;
					break;
				}
			}
			if (t) sum+= (m- t) * 2;
		}
	}
	cout << sum << endl;
	return 0;
	
}
