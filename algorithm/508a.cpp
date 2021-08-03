#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int z[1005][1005];

int main(){
	int n,m,k,a,b,f;
	cin >> n>> m >> k;
	
	f=0;
	for(int i=0;i<k;i++){
		cin >> a >> b;
		z[a][b]= 1;
		int d1= z[a-1][b-1]+z[a-1][b]+z[a][b-1]+z[a][b];
		int d2= z[a-1][b]+z[a][b]+z[a-1][b+1]+z[a][b+1];
		int d3= z[a][b-1]+z[a+1][b-1]+z[a][b]+z[a+1][b];
		int d4= z[a][b]+z[a+1][b]+z[a][b+1]+z[a+1][b+1];
		if (f==0 && (d1==4||d2==4||d3==4||d4==4))
			f= i+1;
		
	}
	cout << f << endl;
	return 0;
}
