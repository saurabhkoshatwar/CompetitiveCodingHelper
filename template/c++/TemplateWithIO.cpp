#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
#define pp pair<ll,ll>
#define mp make_pair
#define si second
#define fi first
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define MAX 1000000
#define f(a,i,n) for(int i=a;i<n;i++)
#define sz(x) (int)(x).size()   
using namespace std;    
ll fpow(ll n, ll k, ll p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;}
ll inv(ll a, ll p = MOD) {return fpow(a, p - 2, p);}
ll spf[MAX+1];

void setIn(string s) { freopen(s.c_str(),"r",stdin); }
void setOut(string s) { freopen(s.c_str(),"w",stdout); }

void io(string s = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    if (sz(s)) {
        setIn(s+".in");
        setOut(s+".out");
    }
}

int main()
{
    io("a_example");
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        cout<<"Case #"<<(i+1)<<": "<<ans<<endl;
        
    }
    return 0;

    
}
