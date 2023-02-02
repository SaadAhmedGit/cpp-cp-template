#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define float double
#define x first
#define y second
typedef vector<int> vInt;
typedef vector<vInt> Matrix;
typedef pair<int, int> coord;

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
