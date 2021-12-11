/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27822442
 * Submitted at: 2021-12-11 21:07:20
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_d
 * Result: WA
 * Execution Time: 82 ms
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
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  bool chk = true;
  rep(i, n) {
    if (Graph[i].size() > 2) {
      chk = false;
      break;
    }
  }
  puts(chk ? "Yes" : "No");
  return 0;
}