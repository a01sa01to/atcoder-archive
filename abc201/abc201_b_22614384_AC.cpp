/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/22614384
 * Submitted at: 2021-05-15 21:23:27
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
using P = pair<string,int>;

int main(){
  int n;
  cin >> n;
  vector<P> v(n);
  for(int i=0;i<n;i++){
    string s;
    int t;
    cin >> s >> t;
    v[i] = make_pair(s,t);
  }
  sort(v.begin(),v.end(),[](P& a, P& b){ return a.second > b.second; });
  cout << v[1].first << endl;
  return 0;
}