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
    ll n; cin >> n;
    if (n%4==1 || n%4==2){
        cout << "NO" << nl;
    }
    else {
        cout << "YES" << nl;
        ll somma=n*(n+1)/4;
        unordered_set<ll> s1;
        unordered_set<ll> s2;
        FORd (i, n, 1){
            if (somma!=0 && i<=somma){
                somma-=i;
                s1.insert(i);
            }
        }
        FORd (i, n, 1){
            if (s1.count(i) == 0)
                s2.insert(i);
        }
        cout << s1.size() << nl;
        feach (x, s1)
            cout << x << ' ';
        cout << nl;
        cout << s2.size() << nl;
        feach (x, s2)
            cout << x << ' ';


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