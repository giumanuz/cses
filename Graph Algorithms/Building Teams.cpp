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
template <class T>
using V = vector<T>;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define FORd(i, a, b) for (int i = (a); i >= b; i--)
#define feach(a, x) for (auto &a : x)

#define sz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define pb push_back

const int MOD = 1000000007;
const char nl = '\n';

/* ---------- Code here ---------- */

void solve()
{
    int n, m;
    cin >> n >> m;
    vvi g(n);
    unordered_set<int> primi;
    unordered_set<int> secondi;
    unordered_set<int> visited;

    FOR(i, 0, m)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    dbg(g);

    auto dfs = [&](auto&& dfs, int u, bool primo, int parent = -1) -> int
    {
        visited.insert(u);
        // dbg(u + 1, 0, primo);
        // dbg(visited);
        if (primo)
            primi.insert(u);
        else
            secondi.insert(u);
        dbg(parent, u, g[u]);
        feach(v, g[u])
        {
            // dbg(v),
            // if (primi.count(v) && !primo)
            //     return 1;
            // if (secondi.count(v) && primo)
            //     return 1;
            if (visited.count(v))
                continue;
            // dbg(u+1, v+1, primo);
            dfs(dfs, v, !primo, u);
        }
        return 0;
    };

    FOR(i, 0, n)
    {
        if (visited.count(i))
            continue;
        if (dfs(dfs, i, true))
        {
            cout << "IMPOSSIBLE" << nl;
            return;
        }
        break;
    }

    FOR(i, 0, n)
    {
        if (primi.count(i) && secondi.count(i))
        {
            cout << "IMPOSSIBLE" << nl;
            return;
        }
    }
    FOR(i, 0, n)
    {
        if (primi.count(i))
            cout << 1 << " ";
        else
            cout << 2 << " ";
    }
}

/* ---------- Main here ---------- */

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}