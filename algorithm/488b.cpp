#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int v[4];
int main(){
	int n,a,b,c,d;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> v[i];
	sort(v, v+n);
	
	if (n==0){
		cout << "YES" << endl;
		cout << "1" << endl;
		cout << "1" << endl;
		cout << "3" << endl;
		cout << "3" << endl;
	}
	if (n==1){
		cout << "YES" << endl;
		cout << v[0] << endl;
		cout << 3* v[0] << endl;
		cout << 3* v[0] << endl;
	}
	if (n==2){
		if (v[1]> 3* v[0])
			cout << "NO" << endl;
		else if (v[1] == 3* v[0]){
			cout << "YES" << endl;
			cout << v[0] << endl;
			cout << v[1] << endl;
		}
		else{
			cout << "YES" << endl;
			cout << 4* v[0] - v[1] << endl;
			cout << 3* v[0] << endl;
		}
	}
	if (n==3){
		if (v[2]> 3* v[0])
			cout << "NO" << endl;
		else if (v[2] == 3* v[0]){  // find mid
			cout << "YES" << endl;
			cout << 4*v[0]- v[1] << endl;
		}
		else if ( v[2] == 4 * v[0] - v[1]){  // find end  
			cout << "YES" << endl;
			cout << 3 * v[0] << endl;
		}
		else if ( (v[0]+ v[1]) *3 == v[2] * 4 && v[2] %3 == 0){ // find front
			cout << "YES" << endl;
			cout << v[2]/ 3 << endl;			
		}
		else{
			cout << "NO" << endl;
		}
	}
	if (n==4){	
		int avg= v[0]+ v[1] + v[2]+ v[3];
		int median = (v[1] + v[2] ) * 2;
		int range = (v[3] - v[0]) *4;
		if (avg== median && avg== range)
			cout << "YES" << endl; 
		else 
			cout << "NO" << endl;
	}
	
	return 0;
}
