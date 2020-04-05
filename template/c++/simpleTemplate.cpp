#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define pp pair<ll,ll>
#define mp make_pair
#define si second
#define fi first
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define MAX 100001
#define f(a,i,n) for(int i=a;i<n;i++)
#define sz(x) (int)(x).size()
using namespace std;    
ll fpow(ll n, ll k, ll p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;}
ll inv(ll a, ll p = MOD) {return fpow(a, p - 2, p);}
ll spf[MAX+1];

int main()
{
ll t,n;
cin>>t;
for(int i=0;i<t;i++){
    
    cout<<"Case #"<<(i+1)<<": "<<ans<<endl;
    
}
return 0;
}
    
