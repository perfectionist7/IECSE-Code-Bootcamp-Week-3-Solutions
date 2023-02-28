#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#define ll long long
using namespace std;
const int N=1e9+10;
ll ans=0;
int main()
{
    ll a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    ans=c*2;
    ll min1;
    min1=min(a,b);
    ans+=min1*2;
    if(abs(a-b)>=1)
    {
        ans++;
    }
    cout<<ans;
    return 0;
}
 