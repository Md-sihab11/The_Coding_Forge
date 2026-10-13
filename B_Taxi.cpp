#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;


//1100 rated


inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int n; 
    cin>>n;

    int cnt[5]={0};

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        cnt[a]++;
    }

    // for(int i=0; i<4; i++)
    // {
    //     cout<<cnn[i]<<" ";
    // }



    int ans=0;
   // 4
    ans += cnt[4];

    // 3 + 1
    ans += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);

    // 2 + 2
    ans += cnt[2] / 2;

    // One group of 2 left
    if (cnt[2] % 2)
    {
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }

    // Remaining 1's
    ans += (cnt[1] + 3) / 4;

    cout << ans;
   
}

int main()
{
    fast_io();
    solve();
}