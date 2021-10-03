/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc026/submissions/26329733
 * Submitted at: 2021-10-03 12:21:19
 * Problem URL: https://atcoder.jp/contests/abc026/tasks/abc026_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main() {
  cout<<fixed<<setprecision(15);
  int n; cin>>n;
  vector<int> r(n);
  rep(i,n) cin >> r[i];
  sort(r.begin(),r.end(),greater<int>());
  long double ans=0;
  const long double Pi=3.141592653589793238;
  rep(i,n) ans+=(i%2?-1:1)*Pi*r[i]*r[i];
  cout<<ans<<endl;
  return 0;
}