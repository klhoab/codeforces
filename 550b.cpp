#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int c[20];
int temp[20];
int n,l,r,x;
 
void check(){
	int cnt = 0;
 
	int t= 1<< n;
	for(int i=0;i<t;i++){
		int k = 0, sum= 0; bool wrong= 0; 
		for(int j=0;j<n;j++){
			if (i& (1<<j)){
				temp[k++]= c[j];
				sum+= c[j];
			}
		}
		sort(temp, temp+k);
		if (k<2|| temp[k-1]- temp[0] < x)
			wrong = 1;
		
		if (!wrong && sum>= l && sum<= r)
			cnt++;
	}
 
	cout << cnt << endl;
}
 
int main(){
	cin >> n>> l >> r >> x;
	for(int i=0;i<n;i++)
		cin >> c[i];
 
	check();
 
	return 0;
}
