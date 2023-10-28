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

//g++ -std=gnu++17 -g -fsanitize=address -fsanitize=undefined -fno-sanitize-recover Two\ Sets.cpp -o a
 
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
    string s; cin >> s;
    vi cnt(26);
    feach (c, s)
        cnt[c-'A']++;
    int odd = 0;
    feach (x, cnt)
        odd += x%2;
    if (odd > 1){
        cout << "NO SOLUTION" << nl;
        return;
    }
    string ans;
    FOR (i, 0, 26){
        if (cnt[i]%2==0){
            FOR (j, 0, cnt[i]/2)
                ans += 'A'+(char)i;
        }
    }
    FOR (i, 0, 26){
        if (cnt[i]%2==1){
            FOR (j, 0, cnt[i])
                ans += 'A'+(char)i;
        }
    }
    FORd (i, 25, 0){
        if (cnt[i]%2==0){
            FOR (j, 0, cnt[i]/2)
                ans += 'A'+(char)i;
        }
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