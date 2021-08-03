#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int cnt[2000005], ans[2000005];

int main(){

    map<int, int> ma;
    memset(cnt, 0, sizeof(cnt));
    memset(ans, 0, sizeof(cnt));
    
    int a, b, n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &a, &b);
        ma[a]= b;
        cnt[a]++;
        cnt[b]++;
        if(a==0)
            ans[1] = b;
    }
    for(int i=0;i<=1000000;i++)
        if(cnt[i]==1 && ma.find(i)!=ma.end() )
            ans[0]= i;
    for(int i=2;i<n;i++)
        ans[i]= ma[ans[i-2]];
    
    for(int i=0;i<n;i++){
        if (i) printf(" ");
        printf("%d", ans[i]);
    }
    printf("\n");
    
        
    return 0;
}
