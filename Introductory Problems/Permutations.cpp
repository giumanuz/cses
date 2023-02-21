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
    ll y, x; cin >> y >> x;

    if (x==1 && y==1){
        cout << 1 << nl;
        return;
    }

    ll massimo=max(x*x, y*y)-max(x,y)+1;

    if (y<=x && max(x,y)%2!=0)
        cout << massimo+(x-y) << nl;

    else if (y>x && max(x,y)%2!=0)
        cout << massimo-(y-x) << nl;

    else if (y<=x && max(x,y)%2==0)
        cout << massimo-(x-y) << nl;
        
    else if (y>x && max(x,y)%2==0)
        cout << massimo+(y-x) << nl;



















}
 
/* ---------- Main here ---------- */
 
int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}