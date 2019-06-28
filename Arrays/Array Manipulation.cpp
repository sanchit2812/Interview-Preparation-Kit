#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, d=0;
    cin>>n>>d;
    vector<ll> v(n+5,0);
    while(d--){
        ll a,b,k=0;
        cin>>a>>b>>k;
        v[a]+=k;
        v[b+1]-=k;
    }
    for(ll i=1;i<=n;i++){
        v[i] += v[i-1];
    }

    ll ans=INT_MIN;
    for(ll i=1;i<=n;i++){
       // cout<<v[i]<<" ";
        ans = max(ans, v[i]);
    }
    cout<<ans<<endl;
    return 0;
}
