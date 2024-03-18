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
    int n, m;
    cin >> n >> m;
    vvi g(n);
    FOR (i, 0, m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    priority_queue<pi, vector<pi>, greater<pi>> pq;
    vi distances(n, INT_MAX);
    distances[0]=0;
    pq.push({0, 0});
    while(!pq.empty()){
        auto [dist, u] = pq.top();
        pq.pop();
        if (distances[u]<dist) continue;
        feach(v, g[u]){
            if (dist+1<distances[v]){
                distances[v] = dist+1;
                pq.push({dist+1, v});
            }   
        }
    }
    if (distances[n-1]==INT_MAX){
        cout << "IMPOSSIBLE" << nl;
        return;
    }
    cout << distances[n-1]+1 << nl;
    vi ans;
    int cur = n-1;
    while(cur!=0){
        ans.pb(cur);
        feach(v, g[cur]){
            if (distances[v] == distances[cur]-1){
                cur = v;
                break;
            }
        }
    }
    ans.pb(0);
    reverse(all(ans));
    feach(x, ans){
        cout << x+1 << " ";
    }
    cout << nl;
    





















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