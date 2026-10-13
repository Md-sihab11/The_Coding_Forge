#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

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

    int x, y;
    cin >> x >> y;

    if(x>=y && x%y==0)
    {
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}