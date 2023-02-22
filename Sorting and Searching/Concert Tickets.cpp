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
    vi tickets(n), customers(m);
    feach (x, tickets) cin >> x;
    feach (x, customers) cin >> x;
    map<int, pair<int, int>> result;
    FOR (i, 0, m){
        result.insert({customers[i], {i, -1}});
    }
    sort (all(tickets), greater());
    sort (all(result), greater());

    auto it = result.begin();

    int j=n-1;
    while(it!=result.end() && j<m){
        while(it->first<tickets[j] && j<m) j++;
        if (j<m){
            result[it->first].second = tickets[j];
        }
        it++;
    }

    vi res(m);
    it = result.begin();
    FOR (i, 0, m){
        res[it->second.first] = it->second.second;
        it++;
    }

    feach (x, res) cout << x << nl;


    





















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