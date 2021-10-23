/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc224/submissions/26758151
 * Submitted at: 2021-10-23 21:05:07
 * Problem URL: https://atcoder.jp/contests/abc224/tasks/abc224_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int h, w;
  cin >> h >> w;
  ll2d Grid(h, ll1d(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  for (int i = 0; i < h; i++)
    for (int j = 0; j < w; j++)
      for (int k = i + 1; k < h; k++)
        for (int l = j + 1; l < w; l++) {
          if (Grid[i][j] + Grid[k][l] > Grid[k][j] + Grid[i][l]) {
            puts("No");
            return 0;
          }
        }
  puts("Yes");
  return 0;
}