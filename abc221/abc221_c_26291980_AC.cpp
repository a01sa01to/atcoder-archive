/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/26291980
 * Submitted at: 2021-10-02 21:19:28
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_c
 * Result: AC
 * Execution Time: 9 ms
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
  string n;
  cin >> n;
  int ans = 0;
  rep(i, 1 << int(n.size())) {
    string s = "", t = "";
    rep(j, n.size()) {
      if (i & 1 << j) s.push_back(n[j]);
      else
        t.push_back(n[j]);
    }
    if (s.empty()) continue;
    if (t.empty()) continue;
    sort(all(s), greater<char>());
    sort(all(t), greater<char>());
    if (s.front() == '0') continue;
    if (t.front() == '0') continue;
    ans = max(ans, stoi(s) * stoi(t));
  }
  cout << ans << endl;
  return 0;
}
