// Author: Cvangi
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pll pair<ll,ll>
#define pb push_back
#define ll long long int
#define mod 1000000007
#define f(i,n) for(int i=0;i<n;i++)
#define debug(x) cout<<#x<<" "<<x<<endl;
#define debug1(x,y,z) cout<<#x<<" "<<x<<endl<<#y<<" "<<y<<endl<<#z<<" "<<z<<endl;
#define pi 3.1415926535897932384626433832
#define pp pair<int,int>
#define fi first
#define se second
 
 
using namespace std;

void solve(){
ll n,x,y;
cin>>n>>x>>y;
ll a[x],b[y];
for(int i=0;i<x;i++){
    cin>>a[i];
}
for(int i=0;i<y;i++){
    cin>>b[i];
}
int ans1=0,ans2=0;
for(int i=0;i<n;i++){
int u=abs(a[i%x]-b[i%y]);
if((u%3==0&&u%5==0)||(u%3!=0&&u%5!=0)){}
else{
    if(u%3==0)ans1++;
    else ans2++;
}
}
cout<<abs(ans1-ans2)<<endl;
}
 
int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t=1;
        cin>>t;
 
 
 
 
    while(t--){
        
        solve();
}
}
 
