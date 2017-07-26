#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;


bool is_pal(string s){
	string s2 (s);
	reverse(s2.begin(), s2.end());
	return s==s2;	
}

string s;

int main(){
	cin >> s;
	int len = s.length();
	
	for(int i=0;i<=len;i++){
		for(char j='a';j<='z';j++){
			string s2="";
			for(int k=0;k<i;k++) 
				s2+= s[k];
			s2+= j;
			for(int k=i;k<len;k++) 
				s2+= s[k];
			if(is_pal(s2)){
				cout<< s2 << endl;
				return 0;
			}
		}
	}	
	cout << "NA" << endl;
	return 0;
}
