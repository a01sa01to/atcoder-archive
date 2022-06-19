/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc142/submissions/32601982
 * Submitted at: 2022-06-19 22:01:46
 * Problem URL: https://atcoder.jp/contests/arc142/tasks/arc142_a
 * Result: WA
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
  ll n, k;
  cin >> n >> k;
  set<ll> ans;
  {
    string s = to_string(k);
    while (true) {
      ll x = stoll(s);
      if (k <= x && x <= n)
        ans.insert(x);
      else
        break;
      s.push_back('0');
    }
  }
  {
    string s = to_string(k);
    reverse(s.begin(), s.end());
    while (true) {
      ll x = stoll(s);
      if (k <= x && x <= n)
        ans.insert(x);
      else
        break;
      s.push_back('0');
    }
  }
  cout << ans.size() << endl;
  return 0;
}