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
    ll n; cin>>n;
    map<ll, ll> m;
    FOR(i, 0, n){
        ll a, b; cin >> a >> b;
        m[a]++;
        m[b+1]--;
    }
    ll ans=0;
    ll loc=0;
    for(auto [k,v]: m){
        loc+=v;
        ans=max(ans, loc);
    }

    cout << ans << nl;



















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