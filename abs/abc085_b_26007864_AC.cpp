/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abs/submissions/26007864
 * Submitted at: 2021-09-20 15:47:35
 * Problem URL: https://atcoder.jp/contests/abs/tasks/abc085_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
int main(){
  int n; cin >> n;
  vector<int> v(n);
  rep(i,n) cin>>v[i];
  sort(all(v));
  v.erase(unique(all(v)),v.end());
  cout << v.size() << endl;
  return 0;
}