#include <bits/stdc++.h>
#ifdef Giulio
    #include <bits/debug.h>
#else
    #define dbg(...)
#endif

using namespace std;
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using pi = pair<int, int>;
using pll = pair<ll, ll>;
template<class T> using V = vector<T>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define FORd(i, a, b) for (int i = (a); i >= b; i--)
#define feach(a, x) for (auto& a : x)
 
#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define pb push_back
 
 
const int MOD = 1000000007;
const char nl = '\n';
 
/* ---------- Code here ---------- */

void solve() {
    int n, m; cin >> n >> m;
    vi tickets(n);
    multiset<ll> ms;
    FOR(i, 0, n) {
        ll x; cin >> x;
        ms.insert(x);
    }
    FOR(i, 0, m){
        ll t; cin >> t;
		auto it = ms.upper_bound(t);
		if (it==ms.begin()){
			cout << -1 << "\n";
		}
		else{
			cout << *(--it) << "\n";
			ms.erase(it);
		}
    }
}
 
/* ---------- Main here ---------- */
 
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}