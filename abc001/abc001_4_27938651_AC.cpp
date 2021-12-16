/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc001/submissions/27938651
 * Submitted at: 2021-12-16 19:21:18
 * Problem URL: https://atcoder.jp/contests/abc001/tasks/abc001_4
 * Result: AC
 * Execution Time: 18 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef pair<int, int> P;
int main() {
  int n;
  cin >> n;
  vector<P> v;
  rep(i, n) {
    int a, b;
    scanf("%d-%d", &a, &b);
    a = a - (a % 5);
    b = b + (5 - (b % 5)) % 5;
    if (b % 100 >= 60) {
      b += 40;
    }
    v.push_back({ a, b });
  }
  sort(v.begin(), v.end());
  vector<P> ans;
  P prev = v[0];
  rep(i, n) {
    if (prev.second < v[i].first) {
      ans.push_back(prev);
      prev = v[i];
    }
    else {
      prev.second = max(prev.second, v[i].second);
    }
  }
  ans.push_back(prev);
  rep(i, ans.size()) {
    printf("%04d-%04d\n", ans[i].first, ans[i].second);
  }
  return 0;
}