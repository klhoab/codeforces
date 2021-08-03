#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <cmath>
#include <bitset>
#include <vector>
#include <algorithm>
#include <map>
#include <cctype>
#include <set>
using namespace std;

typedef long long int ll;

int INF = 2147483647;
int a[1005];

int main(){
    int n, l;
    scanf("%d%d", &n, &l);
    
    for (int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    sort(a,a+n);
    
    double ans= 0;
    for (int i=1;i<n;i++)
        if( a[i]-a[i-1] > ans)
            ans= a[i]- a[i-1];
    
    ans/= 2.0;
    
    double t= max( a[0], l-a[n-1]);
    
    ans= max( t, ans);
    printf("%.10f\n", ans);
    return 0;
}
