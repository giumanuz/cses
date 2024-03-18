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

struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first*31+v.second;
    }
};
 
void dfs(int i, int j, vvi& vis, vvi& a, int n, int m){
    
    if (i<0 || j<0 || i>=n || j>=m || a[i][j]==0 || vis[i][j]==1)
        return;

    vis[i][j]=1;    
    vector<pair<int, int>> coppie{{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

    for (auto [xx, yy]: coppie){
        dfs(i+xx, j+yy, vis, a, n, m);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vvi a(n, vi(m));

    FOR(i, 0, n) {
        string s;
        cin >> s;   
        FOR(j, 0, m) {
            a[i][j] = s[j] == '.';
        }
    }

    vvi vis(n, vi(m, 0));
    int ans=0;
    FOR (i, 0, n){
        FOR (j, 0, m){
            if (a[i][j] == 1 && vis[i][j]==0) {
                ans += 1;
                dfs(i, j, vis, a, n, m);
            }
        }
    }
    cout << ans;

















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