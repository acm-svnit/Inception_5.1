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
    
    ll n;
    cin>>n;
    ll a[10]={0};
    ll temp;
    f(i,n){
        cin>>temp;
        ll ans=0;
        for(int j=0;j<10;j++){
            if(temp>a[j]){
                for(int k=9;k>j;k--){
                    a[k]=a[k-1];
                }
                a[j]=temp;
                break;
            }
        }
        for(int j=0;j<10;j++){
            ans+=a[j];
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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
 
