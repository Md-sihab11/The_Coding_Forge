#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

// I become the guy, Oh, my keyboard!
inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve()
{
    int f, p, q, arr[200], count = 0;
    cin >> f >> p;

    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }

    cin >> q;

    for (int i = p; i < p + q; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + (p + q)); // new learning

    for (int i = 0; i < p + q; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }

    if (count == f)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    // set<int> s;

    // for (int i = 0; i < p; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }

    // for (int i = p; i < p + q; i++)
    // {
    //     int x;
    //     cin >> x;
    //     s.insert(x);
    // }

    //     if (count == f)
    //         cout << "I become the guy.";
    //     else
    //         cout << "Oh, my keyboard!";
}
int main()
{
    fast_io();
    // int t;
    // cin>>t;
    // while(t--)
    // {
    solve();
    // }
}