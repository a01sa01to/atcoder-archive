/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc127/submissions/27937527
 * Submitted at: 2021-12-16 17:40:56
 * Problem URL: https://atcoder.jp/contests/abc127/tasks/abc127_d
 * Result: AC
 * Execution Time: 99 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  priority_queue<ll, vector<ll>, greater<ll>> a;
  rep(i, n) {
    ll x;
    cin >> x;
    a.push(x);
  }
  vector<P> b(m);
  rep(i, m) cin >> b[i].first >> b[i].second;
  sort(b.begin(), b.end(), [](P& a, P& b) {
    return a.second < b.second;
  });
  ll ans = 0;
  while (!a.empty()) {
    ll x = a.top();
    a.pop();
    if (!b.empty()) {
      ans += max(x, b.back().second);
      --b.back().first;
      if (b.back().first == 0) b.pop_back();
    }
    else {
      ans += x;
    }
  }
  cout << ans << endl;
  return 0;
}