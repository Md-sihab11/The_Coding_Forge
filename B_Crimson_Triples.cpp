#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;


inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll e;
    cin>>e;

    ll ans =0; 

    for(int a=1; a<=e; a++)
    {
        ll multiples=(e/a);
        ans+=(multiples*multiples);    
    }

    cout<<ans<<endl;
   
}

int main()
{
    fast_io();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
}