#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

//2240A

inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve() {
    ll n, k;
    cin >> n >> k;
   
    ll ans=0; 
    ll pow=0;

    while(true)
    {
        ll sum = (1LL<<pow)*k;
        if(sum<=n)
        {
            ans+=k;
            n-=sum;
            pow++;
        }
        else{
            ans+=(n/(1LL<<pow));
            break;
        }
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