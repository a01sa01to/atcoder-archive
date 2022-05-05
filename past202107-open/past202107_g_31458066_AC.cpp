/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202107-open/submissions/31458066
 * Submitted at: 2022-05-06 00:29:18
 * Problem URL: https://atcoder.jp/contests/past202107-open/tasks/past202107_g
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n;
  cin >> n;
  vector<ll> toSanshin(0);

  {
    ll tmp = 1;
    while (tmp <= n) {
      toSanshin.push_back(n % (tmp * 3) / tmp);
      tmp *= 3;
    }
  }
  rep(i, toSanshin.size()) {
    if (toSanshin[i] >= 2) {
      if (i == toSanshin.size() - 1)
        toSanshin.push_back(1);
      else
        toSanshin[i + 1]++;
      toSanshin[i] -= 3;
    }
  }
  Debug(toSanshin);

  vector<ll> ans(0);
  {
    ll t = 1;
    rep(i, toSanshin.size()) {
      if (toSanshin[i] != 0)
        ans.push_back(t * toSanshin[i]);
      t *= 3;
    }
  }
  Debug(ans);

  cout << ans.size() << endl;
  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}