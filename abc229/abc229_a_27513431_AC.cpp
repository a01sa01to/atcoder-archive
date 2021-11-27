/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27513431
 * Submitted at: 2021-11-27 21:01:57
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_a
 * Result: AC
 * Execution Time: 3 ms
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
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  char a,b,c,d;
  cin>>a>>b>>c>>d;
  int cnt=0;
  cnt+=a=='#';
  cnt+=b=='#';
  cnt+=c=='#';
  cnt+=d=='#';
  if(cnt>2) puts("Yes");
  else puts(a==c||b==d||a==b||c==d?"Yes":"No");
  return 0;
}