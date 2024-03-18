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
    vvi a(n, vi(m));
    pi start, end;

    FOR(i, 0, n) {
        string s;
        cin >> s;   
        FOR(j, 0, m) {
            a[i][j] = s[j]=='#' ? -1 : INT_MAX;
            if (s[j]=='A'){
                start.first = i;
                start.second = j;
                a[i][j] = 0;
            }
            if (s[j]=='B'){
                end.first = i;
                end.second = j;
                a[i][j] = INT_MAX;
            }
        }
    }

    queue<pi> q;
    q.push(start);
    pi dir[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    while(!q.empty()){
        pi cur = q.front();
        q.pop();
        for(auto [xx, yy]: dir){
            int x = cur.first + xx;
            int y = cur.second + yy;
            if (x>=0 && x<n && y>=0 && y<m && a[x][y] == INT_MAX){
                a[x][y] = a[cur.first][cur.second] + 1;
                q.push({x, y});
            }
        }
    }

    string ans;
    if (a[end.first][end.second] == INT_MAX){
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
    cout << a[end.first][end.second] << nl;
    pi pos = end;
    dbg(a);
    while (pos != start){
        // cout << pos.first << " " << pos.second << nl;
        for (auto [xx, yy]: dir){
            int x = pos.first + xx;
            int y = pos.second + yy;
            if (x>=0 && x<n && y>=0 && y<m && a[x][y] == a[pos.first][pos.second]-1){
                if (xx == 1) ans += 'U';
                if (xx == -1) ans += 'D';
                if (yy == 1) ans += 'L';
                if (yy == -1) ans += 'R';
                pos = {x, y};
                break;
            }
        }
    }
    reverse(all(ans));
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