#include <iostream>
#include <string>
using namespace std;

string x, y;

int main(){
	cin>> x >> y;
	
	int diff = 0;
	for (int i=0;x[i];i++)
		if (x[i]!= y[i])
			diff++;
	
	if (diff%2== 1){
		cout<< "impossible" << endl;
	}
	else {
		int cnt = 0;
		for (int i=0;x[i];i++){
			if (x[i]!= y[i] && cnt< diff/2){
				cout << x[i];
				cnt++;
			}
			else cout << y[i];
		}
		cout << endl;
	}
	
	return 0;
}
