/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc237/submissions/28900793
 * Submitted at: 2022-01-30 21:02:36
 * Problem URL: https://atcoder.jp/contests/abc237/tasks/abc237_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll n;cin>>n;
  if(abs(n) < 1LL<<31 || -n == 1LL<<31){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
  return 0;
}