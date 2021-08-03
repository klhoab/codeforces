#include <iostream>
using namespace std;

char a[55][55];
int n,m; 

int f(int x, int y){
	if (x<0||y<0||x>=n||y>=m) return 0;
	if (a[x][y]=='f') return 1000;
	if (a[x][y]=='a') return 100;
	if (a[x][y]=='c') return 10;
	if (a[x][y]=='e') return 1;
	return 0;
}
int main(){
	cin >> n >> m;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	int cnt= 0;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<m-1;j++)
			if ((f(i,j)+ f(i,j+1)+ f(i+1,j)+ f(i+1,j+1)) == 1111)
				cnt++;
	
	cout << cnt<< endl;
	return 0;

}
