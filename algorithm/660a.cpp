#include <iostream>
using namespace std;
int a[2005];
int gcd(int x, int y){
	if (y==0) return x;
	return gcd(y,x%y);
}

int main(){
	int n, k=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=1;i<n;i++)
		if (gcd(a[i-1],a[i])!= 1){
			k++;
		}
	cout << k << endl;
	cout << a[0]<< " ";
	for(int i=1;i<n;i++){
		if (gcd(a[i-1],a[i])!= 1){
			cout << "1 ";
		}
		cout <<  a[i]<< " ";
	}
	cout << endl;
	return 0;
}
