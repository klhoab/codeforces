#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

string s[105];
int n, m;
	
bool check(int col){
	col++;
	for(int i=1;i<n;i++){
		if (s[i].substr(0,col)< s[i-1].substr(0,col) )
			return 1;
	}
	return 0;
}
void remove(int col){
	int len = s[0].length();
	string s1, s2;
	for(int i=0;i<n;i++){
		s1= s[i].substr(0,col);
		s2= s[i].substr(col+1, len- col -1);
		s[i]= s1+ s2;
	}
}
void print(){
	for(int i=0;i<n;i++)
		cout << s[i] << endl;
	cout << endl;
}

int main(){
	cin >> n >> m;
	
	for(int i=0;i<n;i++)
		cin >> s[i];
	
	if (n==1){
		cout << "0" << endl;
		return 0;
	}
	
	
	for(int i=0;i< s[0].length();i++)
		while (i<s[0].length() && check(i) ){
			remove(i);
			//print();
		}
	
	cout << m- s[0].length() << endl;
	
}
