/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30173584
 * Submitted at: 2022-03-17 01:03:05
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_f
 * Result: AC
 * Execution Time: 532 ms
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
  int n;
  cin >> n;
  map<int, vector<int>> mp;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    mp[a].push_back(b);
  }
  int ans = 0;
  priority_queue<int> pq;
  rep(i, n) {
    for (int x : mp[i + 1]) pq.push(x);
    ans += pq.top();
    pq.pop();
    cout << ans << endl;
  }
  return 0;
}