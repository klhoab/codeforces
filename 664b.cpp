#include <iostream>
#include <string>
using namespace std;


bool sign[105];

bool check(int a, int b, int n, int result){
	return (a>=0 && b>=0 && (b*-n+ a*1 <= result) && (result<= a*n - b*1));
}
int main(){
	string s;
	int n, a= 0, b= 0, curr_sign= 1;
	sign[0] = 1;
	while ( cin >> s){
		if (s=="=") { 
			cin >> n; 
			break;
		}	
		if (s=="?"){
			sign[a+b] = curr_sign;
			if (curr_sign){
				a++;
			} 
			else {
				b++;
			}
			curr_sign= 1;
		}
		if (s== "+"){
			curr_sign= 1;
		}
		if (s== "-"){
			curr_sign = 0;
		}
	}
	if (check(a, b, n, n)){
		cout << "Possible" << endl;
		int c = a+b, remain	= n;

		for (int i = 0; i < c; ++i){
			if (i){
				if (sign[i]) cout << "+ ";
				else cout << "- ";
			}
			for (int j = 1; j <= n; ++j){
				if (sign[i] && check(a-1, b, n, remain - j)){
					remain-= j;
					a--;
					cout << j << " ";
					break;
				}
				else if (!sign[i] && check(a, b-1, n, remain + j)){
					remain += j;
					b--;
					cout << j << " ";
					break;
				}
			}
		}
		cout << "= " << n << endl;
	}
	else
		cout << "Impossible" << endl;
	
	return 0;
}
