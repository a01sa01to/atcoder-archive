/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/26640954
 * Submitted at: 2021-10-17 21:42:48
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_f
 * Result: WA
 * Execution Time: 365 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  fenwick_tree<int> fw(n);
  rep(i, n) fw.add(i, (s[i] == '(' ? 1 : -1));
  while (q--) {
    int t, l, r;
    cin >> t >> l >> r;
    l--, r--;
    if (t == 1) {
      int fl = fw.sum(l, l + 1);
      int fr = fw.sum(r, r + 1);
      if (fl != fr) {
        if (fl == 1) {
          fw.add(l, -2);
          fw.add(r, 2);
        }
        else {
          fw.add(r, -2);
          fw.add(l, 2);
        }
      }
    }
    else {
      if (fw.sum(l, l + 1) == -1 || fw.sum(r, r + 1) == 1) {
        puts("No");
        continue;
      }
      puts(fw.sum(l, r + 1) == 0 ? "Yes" : "No");
    }
  }
  return 0;
}