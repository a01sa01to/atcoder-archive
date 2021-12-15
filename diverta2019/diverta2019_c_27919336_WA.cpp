/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/diverta2019/submissions/27919336
 * Submitted at: 2021-12-15 12:01:15
 * Problem URL: https://atcoder.jp/contests/diverta2019/tasks/diverta2019_c
 * Result: WA
 * Execution Time: 16 ms
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
  int ans = 0, frontB = 0, backA = 0;
  rep(i, n) {
    string s;
    cin >> s;
    for (int j = 0; j < s.size() - 1; ++j)
      if (s[j] == 'A' && s[j + 1] == 'B') ++ans;
    if (s.front() == 'B') ++frontB;
    if (s.back() == 'A') ++backA;
  }
  cout << min(frontB, backA) + ans << endl;
  return 0;
}