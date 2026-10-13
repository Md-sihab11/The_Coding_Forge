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
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        cout << -(n + 1) / 2;
    }
}
int main()
{
    fast_io();
    int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
}