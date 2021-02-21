#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
double pi = acos(-1.0);
const double EPS=1e-9;
#define MOD ll(1e9L+7)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define t() ll tt;cin>>tt;while(tt--) 
#define t2() ll tt2; cin>>tt2; for(ll tti=1;tti<=tt2;tti++)
#define printcj "Case #"<<tti<<": "
#define debug1(x) cerr << #x << " = " << x << '\n';
#define debug2(x, y) cout << #x << " = " << x << "   " << #y << " = " << y << "\n";
#define debug3(x, y,z) cout << #x << " = " << x << "   " << #y << " = " << y << " "<<#z<<" = "<<z<<"\n";
#define debugarray(arr,n) { cout << "[" ; for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"] , \n";}


int main()
{
    fastio;
    ll i,j,n,m,n1,m1;
    t()
    {
        cin>>n>>m;
        ll x,y;
        ll offset=0;
        
        if(n<=m){
            if(n%2==0) n1=2;
            else n1=1;
            m1 = m - (n-n1);
            offset = (n-n1)/2;
        }
        else{
            if(m%2==0) m1 = 2;
            else m1=1;
            n1 = n - (m-m1);
            offset = (m-m1)/2;
        }
        n = n1;
        m = m1; 
        if(n<=m){
            if(n==1) x=offset,y=offset+m-1;
            else if(n==2) x=offset+1,y=offset;
            else assert(0);
        }
        else {
            if(m==1) x = offset+n-1,y=offset;
            else if(m==2) x = offset+1,y=offset;
            else assert(0);
        }
        cout<<x<<" "<<y<<"\n";


    }
}
