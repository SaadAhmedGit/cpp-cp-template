#include <bits/stdc++.h>
using namespace std;

#define int long long
#define float long double
#define pb push_back
#define x first
#define y second
#define For(i, a, b) for (int i = (a); i < (b); ++i)
#define forEach(i, c) for (auto i = (c).begin(); i != (c).end(); ++i)
#define rep(i, n) For(i, 0, n)
#define all(c) c.begin(), c.end()
using vect = vector<int>;
using Matrix = vector<vect>;
using coord = pair<int, int>;

inline void fastIO();

void sol()
{
  // Write your solution here
}

signed main()
{
    fastIO();
#ifdef LOCAL_ENV
    ifstream in("in.txt");
    cin.rdbuf(in.rdbuf());
#endif

    int T = 0;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        sol();
        cout << '\n';
    }
    return 0;
}

inline void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
