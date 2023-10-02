#include <bits/stdc++.h>
using namespace std;

#define fastIO() cout.tie(0), cin.tie(0)->sync_with_stdio(0);

#define float long double
#define int long long
#define x first
#define y second
#define all(c) (c).begin(), (c).end()
#define rAll(c) (c).rbegin(), (c).rend()
#define pb(v) push_back(v)
#define ins(v) insert(v)
#define sz(c) (int)c.size()
#define len(c) (int)c.length()

constexpr int MOD = 1000000007;
constexpr int MOD2 = 998244353;

#define For(i, a, b) for (int i = a; i < b; ++i)
#define rFor(i, a, b) for (int i = a; i >= b; --i)
#define rep(i, N) For(i, 0, N)
#define rRep(i, N) rFor(i, N, 0)
#define forEach(i, c) for (auto i = c.begin(); i != c.end(); ++i)
#define rForEach(i, c) for (auto i = c.rbegin(); i != c.rend(); ++i)

using vi = vector<int>;
using Mi = vector<vi>;
using pii = pair<int, int>;
using str = string;
template <typename T> using vec = vector<T>;
template <typename T> using Matrix = vec<vec<T>>;
template <typename k, typename v> using uomap = unordered_map<k, v>;
template <typename k, typename v> using uoset = unordered_set<k, v>;

void sol() {
}

signed main() {
#ifdef LOCAL_ENV
    ifstream in("in.txt");
    cin.rdbuf(in.rdbuf());
#endif
    fastIO();
    int T = 1;
    cin >> T;
    For(t, 1, T + 1) {
        sol();
        cout << '\n';
    }
}
