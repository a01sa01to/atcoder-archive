/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc006/submissions/27252206
 * Submitted at: 2021-11-14 16:09:57
 * Problem URL: https://atcoder.jp/contests/ahc006/tasks/ahc006_a
 * Result: AC
 * Execution Time: 11 ms
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

struct route {
  struct dist {
    int x, y;
  };
  struct from {
    int x, y;
  };
  dist dst;
  from frm;
};

int main() {
  cout << fixed << setprecision(15);
  // input
  vector<route> routes(1000);
  rep(i, 1000) cin >> routes[i].frm.x >> routes[i].frm.y >> routes[i].dst.x >> routes[i].dst.y;
  // output
  printf("50");
  for (int i = 1; i < 51; i++) printf(" %d", i);
  putchar('\n');
  printf("102");
  printf(" %d %d", 400, 400);
  for (int i = 0; i < 50; i++) printf(" %d %d %d %d", routes[i].frm.x, routes[i].frm.y, routes[i].dst.x, routes[i].dst.y);
  printf(" %d %d", 400, 400);
  putchar('\n');
  return 0;
}