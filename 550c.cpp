#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	s= "00"+ s;
	
	for(int i=2;s[i];i++)
		if (s[i]=='0' || s[i]=='8'){
			cout << "YES" << endl;
			cout << s[i] << endl;
			return 0;
		}
	
	int l = s.length();
	for (int i=0;i<l;i++)
		for(int j=i+1;j<l;j++)
			for(int k=j+1;k<l;k++)
				if ( ((s[i]-'0')*100+ (s[j]-'0')*10+s[k]-'0') % 8 == 0){
					cout << "YES" << endl;
					if (s[i]-'0') cout << s[i];
					cout << s[j];
					cout << s[k];
					return 0;
				}
				
	cout << "NO" << endl;
							
	return 0;
}
