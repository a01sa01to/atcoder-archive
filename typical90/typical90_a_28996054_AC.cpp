/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28996054
 * Submitted at: 2022-02-02 00:21:36
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_a
 * Result: AC
 * Execution Time: 44 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, l;
  cin >> n >> l;
  int k;
  cin >> k;
  vector<int> a(n);
  {
    int prev = 0;
    rep(i, n) {
      int x;
      cin >> x;
      a[i] = x - prev;
      prev = x;
    }
    a.push_back(l - prev);
    Debug(a);
  }
  int ok = 0, ng = l;
  while (abs(ng - ok) > 1) {
    // スコアがmid以上になるようにしたとき、かけらはk+1以上か
    int mid = (ok + ng) / 2;
    int cnt = 0, prev = 0;
    Debug(mid);
    rep(i, n + 1) {
      if (prev >= mid) ++cnt, prev = 0;
      prev += a[i];
    }
    if (prev >= mid) ++cnt;
    Debug(cnt);
    if (cnt > k) ok = mid;
    else
      ng = mid;
  }
  cout << ok << endl;
  return 0;
}