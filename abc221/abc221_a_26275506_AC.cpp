/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc221/submissions/26275506
 * Submitted at: 2021-10-02 21:02:41
 * Problem URL: https://atcoder.jp/contests/abc221/tasks/abc221_a
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
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int a,b;
  cin>>a>>b;
  int ans=1;
  rep(_,a-b) ans*=32;
  cout<<ans<<endl;
  return 0;
}
