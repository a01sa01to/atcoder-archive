/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc111/submissions/27809939
 * Submitted at: 2021-12-11 17:30:27
 * Problem URL: https://atcoder.jp/contests/abc111/tasks/arc103_a
 * Result: AC
 * Execution Time: 38 ms
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
  int n;
  cin >> n;
  vector<int> v(n);
  rep(i, n) cin >> v[i];
  vector<pair<int, int>> cnt(1e5 + 1, { 0, 0 });
  rep(i, n) {
    if (i % 2 == 0) ++cnt[v[i]].first;
    else
      ++cnt[v[i]].second;
  }
  pair<int, int> oddMax = { 0, 0 }, evenMax = { 0, 0 };
  rep(i, 1e5 + 2) {
    if (cnt[i].first > oddMax.second) oddMax = { i, cnt[i].first };
    if (cnt[i].second > evenMax.second) evenMax = { i, cnt[i].second };
  }

  if (oddMax.first == evenMax.first) {
    evenMax = { 0, 0 };
    rep(i, 1e5 + 2) {
      if (i != oddMax.first && cnt[i].second > evenMax.second) { evenMax = { i, cnt[i].second }; }
    }
    int tmpans = 0;
    rep(i, n) {
      if (i % 2 == 0) {  // odd
        if (v[i] != oddMax.first) ++tmpans;
      }
      else {  // even
        if (v[i] != evenMax.first) ++tmpans;
      }
    }

    swap(oddMax, evenMax);
    oddMax = { 0, 0 };
    rep(i, 1e5 + 2) {
      if (i != evenMax.first && cnt[i].first > oddMax.second) oddMax = { i, cnt[i].first };
    }
    int tmpans2 = 0;
    rep(i, n) {
      if (i % 2 == 0) {  // odd
        if (v[i] != oddMax.first) ++tmpans2;
      }
      else {  // even
        if (v[i] != evenMax.first) ++tmpans2;
      }
    }
    cout << min(tmpans, tmpans2) << endl;
  }
  else {
    int ans = 0;
    rep(i, n) {
      if (i % 2 == 0) {  // odd
        if (v[i] != oddMax.first) ++ans;
      }
      else {  // even
        if (v[i] != evenMax.first) ++ans;
      }
    }
    cout << ans << endl;
  }
  return 0;
}