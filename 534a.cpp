#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

int a[5005];

int main(){
	int n, x,y;
	
	cin >> n;
	if (n==1 || n==2){
		cout << 1 << endl;
		cout << 1 << endl;	
	}
	else if (n==3){
		cout << 2 << endl;
		cout << 1 << " " << 3 << endl;
	}
	else if (n==4){
		cout << 4 << endl;
		cout << 2 << " " << 4 << " "<< 1 << " "<< 3 << endl;
	}
	else {
		int cnt= 0;
		for(int i=0;i<n;i+=2){
			++cnt;
			a[i]= cnt;
		}
		for(int i=1;i<n;i+=2){
			++cnt;
			a[i]= cnt;
		}			
		cout << cnt<< endl;
		for(int i=0;i<cnt;i++)
			cout << a[i] << " ";
		cout << endl;
	}	
	return 0;
}
