#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

long long int gcd(long long int a, long long int b){
	if (b==0)
		return a;
	return gcd(b, a%b);
}

int main(){
	long long int a, b;
	cin >> a >> b;
	
	for(long long int x=a; x<=b; x++){
		for(long long int y=x+1; y<=b; y++){
			for(long long int z=y+1; z<=b; z++){
				if ( gcd(x, y)==1 && gcd(y,z)==1 && gcd(x,z)>1 ){
					cout << x << " " << y << " " << z << endl;
					return 0;
				}
			}
		}
	}
	cout << "-1" << endl;
	return 0;
}
