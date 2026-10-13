#include <iostream>
#include <set>

using namespace std;

#define endl '\n'
using ll = long long;


bool is_good(ll n) {
    set<int> digits;
    while (n > 0) {
        digits.insert(n % 10);
        n /= 10;
    }
    return digits.size() <= 2;
}

void solve() {
    ll x;
    cin >> x;

    for (ll y = 2; y <= 1000000; y++) {
        if (is_good(y)) { 
            ll product = x * y;
            if (is_good(product)) { 
                cout << y << endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}