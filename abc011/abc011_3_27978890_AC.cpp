/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc011/submissions/27978890
 * Submitted at: 2021-12-19 16:21:44
 * Problem URL: https://atcoder.jp/contests/abc011/tasks/abc011_3
 * Result: AC
 * Execution Time: 8 ms
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

int n, ng1, ng2, ng3;
bool chk(int x) { return (x != ng1) && (x != ng2) && (x != ng3); }

int main() {
  cin >> n >> ng1 >> ng2 >> ng3;
  int cnt = 0;
  if (!chk(n)) { puts("NO"); return 0; }
  while (n > 0) {
    if (chk(n - 3)) n -= 3;
    else if (chk(n - 2)) n -= 2;
    else if (chk(n - 1)) n -= 1;
    else { puts("NO"); return 0; }
    ++cnt;
  }
  puts(cnt > 100 ? "NO" : "YES");
  return 0;
}