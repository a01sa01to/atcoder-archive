/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/cf16-final/submissions/27806921
 * Submitted at: 2021-12-11 15:04:41
 * Problem URL: https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_b
 * Result: AC
 * Execution Time: 19 ms
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
  ll n;
  cin >> n;
  ll ok = 1e9, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    if ((mid * (mid + 1) / 2) >= n) ok = mid;
    else
      ng = mid;
  }
  while(n){
    if(n>=ok){
      cout<<ok<<endl;
      n-=ok;
    }
    --ok;
  }
  return 0;
}