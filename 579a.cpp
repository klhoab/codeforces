#include <iostream>
using namespace std;

int main(){
	int  ans= 0, x;
	cin>> x;
	
	while (x){
		if (x%2==1) { x--; ans++;}
		x/=2;
	}
	cout << ans<< endl;
	return 0;
}
