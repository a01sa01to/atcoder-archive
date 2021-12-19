/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc232/submissions/27994637
 * Submitted at: 2021-12-19 21:14:44
 * Problem URL: https://atcoder.jp/contests/abc232/tasks/abc232_c
 * Result: AC
 * Execution Time: 22 ms
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
  vector<set<int>> Takahashi(n), Aoki(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Takahashi[a].insert(b);
    Takahashi[b].insert(a);
  }
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    Aoki[a].insert(b);
    Aoki[b].insert(a);
  }
  vector<int> p(n);
  iota(p.begin(), p.end(), 0);
  do {
    bool ok = true;
    rep(i, n) rep(j, n) {
      if (i == j) continue;
      if ((Takahashi[i].count(j) && !Aoki[p[i]].count(p[j])) || (!Takahashi[i].count(j) && Aoki[p[i]].count(p[j]))) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(p.begin(), p.end()));
  cout << "No" << endl;
  return 0;
}