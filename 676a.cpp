#include <iostream>
using namespace std;

const int MAX = 12;
double triangle[MAX + 1][MAX + 1];
int n, t;

void fill() {
    triangle[0][0] += 1; 

	for(int i = 0; i < MAX; i++) {
        for(int j = 0; j <= i; j++) {
    		if (triangle[i][j]> 1){
    			double r= triangle[i][j] - 1;
    			triangle[i][j]=  1;
    			triangle[i+1][j]+= r/ 2;
    			triangle[i+1][j+1]+= r/ 2;
    		}    
    	}
    }
}

int count(){
	int c= 0;
	for (int i=0; i<n; i++){
		for (int j=0; j<=i; j++){
			if (triangle[i][j]>=1){
				c++;
			}
		}
	}
	return c;
}
int main(){
	int ans= 0;
	cin >> n >> t;
	while (t--) fill();

	ans= count() ;
	cout << ans << endl;
	return 0;
}
