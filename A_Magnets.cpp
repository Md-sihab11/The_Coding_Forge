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

    string prev;
    cin >> prev; //akta input akhane nicche baki gula loop er under e

    int grp = 1;

    for (int i = 1; i < n; i++)
    {
        string curr;
        cin >> curr;

        // prev=a;
        if (prev != curr)
        {
            grp++;
        }
        prev = curr;
    }
    cout << grp << endl;
}
int main()
{
    fast_io();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
}