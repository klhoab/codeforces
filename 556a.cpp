#include <iostream>
#include <string>
using namespace std;

int a[200005];
int main(){
    int n, l, top; string s;
    cin>> n >> s;
    l = s.length();
    top = 0;
    
    for (int i=0;i<l;i++){
        if (top>0){
           int t= a[top];
           if (t+ s[i]-'0'== 1)
              top--;
           else 
                a[++top]= s[i]-'0';
        }
        else  a[++top]= s[i]-'0';   
    }
    cout << top << endl;
    return 0;
}
