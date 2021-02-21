#include<bits/stdc++.h>
using namespace std;

long long int parent(long long int n , long long int k) {
    return (n+k-2)/k;
}

long long int child(long long int n , long long int m , long long int k) {
    return (n-1)*k + m + 1;
}

void solve() {
    long long int type , n , m , k;
    cin >> type;
    if(type == 1) {
        cin >> n >> k;
        cout << parent(n , k) << "\n";
    }
    else if(type == 2) {
        cin >> n >> m >> k;
        cout << child(n , m , k) << "\n";
    }
}

int main() {
    long long int tc = 1;
    cin >> tc;
    while(--tc >= 0) {
        solve();
    }
}
