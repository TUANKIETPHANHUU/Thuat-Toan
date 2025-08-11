/**
*    author:  trandangquang
**/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define rep(i, a, b) for (ll i = (a); i <= (b); ++i)
#define per(i, a, b) for (ll i = (a); i >= (b); --i)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);

//rarely use freopen
#define file(name) if (fopen(name".inp", "r")) { freopen(name".inp", "r", stdin); freopen(name".out", "w", stdout); }

ll tt;
int main() {
    fastio;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll ans = 1e9;
        bool check = true;
        rep(i, 0, n - 1) {
            cin >> a[i];
            if (i > 0) {
                ans = min(ans, a[i] - a[i - 1]);
                check &= a[i] >= a[i - 1];
            }
        }
        if (!check) {
            cout << "0\n";
            continue;
        }
        cout << ans / 2 + 1 << "\n";
    }
    return 0;
}
