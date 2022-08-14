/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc058/submissions/34050042
 * Submitted at: 2022-08-14 22:53:54
 * Problem URL: https://atcoder.jp/contests/agc058/tasks/agc058_a
 * Result: WA
 * Execution Time: 62 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<int> solve(int n, vector<int> p) {
  vector<int> ans(0);
  if (p[2 * n - 2] > p[2 * n - 1]) {
    ans.push_back(2 * n - 1);
    swap(p[2 * n - 2], p[2 * n - 1]);
  }
  for (int i = 0; i < 2 * n - 2; i += 2) {
    if (p[i] < p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
      // 1 2 3
      ans.push_back(i + 2);
      swap(p[i + 1], p[i + 2]);
    }
    else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] < p[i + 2]) {
      // 1 3 2
      // do nothing
    }
    else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
      // 2 1 3
      ans.push_back(i + 2);
      swap(p[i + 1], p[i + 2]);
    }
    else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
      // 2 3 1
      // do nothing
    }
    else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] > p[i + 2]) {
      // 3 1 2
      ans.push_back(i + 1);
      swap(p[i], p[i + 1]);
    }
    else if (p[i] > p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
      // 3 2 1
      ans.push_back(i + 1);
      swap(p[i], p[i + 1]);
    }
  }
  for (int i = 1; i < 2 * n - 2; i += 2) {
    if (p[i] < p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
      // 1 2 3
      ans.push_back(i + 1);
      swap(p[i], p[i + 1]);
    }
    else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] < p[i + 2]) {
      // 1 3 2
      ans.push_back(i + 1);
      swap(p[i], p[i + 1]);
    }
    else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] < p[i + 2]) {
      // 2 1 3
      // do nothing
    }
    else if (p[i] < p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
      // 2 3 1
      ans.push_back(i + 2);
      swap(p[i + 1], p[i + 2]);
    }
    else if (p[i] > p[i + 1] && p[i + 1] < p[i + 2] && p[i] > p[i + 2]) {
      // 3 1 2
      // do nothing
    }
    else if (p[i] > p[i + 1] && p[i + 1] > p[i + 2] && p[i] > p[i + 2]) {
      // 3 2 1
      ans.push_back(i + 2);
      swap(p[i + 1], p[i + 2]);
    }
  }
  Debug(p);
  assert(ans.size() <= n);
  rep(i, p.size() - 1) {
    if (i % 2 == 0)
      assert(p[i] < p[i + 1]);
    else
      assert(p[i] > p[i + 1]);
  }
  return ans;
}

int main() {
  // for (int n = 1; n <= 5; n++) {
  //   vector<int> p(2 * n);
  //   iota(p.begin(), p.end(), 1);
  //   do {
  //     Debug(n, p);
  //     solve(n, p);
  //   } while (next_permutation(p.begin(), p.end()));
  // }

  int n;
  cin >> n;
  vector<int> p(2 * n);
  rep(i, 2 * n) cin >> p[i];
  vector ans = solve(n, p);
  sort(ans.begin(), ans.end());
  cout << ans.size() << endl;
  for (int i : ans) cout << i << " ";
  cout << endl;
  return 0;
}