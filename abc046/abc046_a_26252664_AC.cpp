/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc046/submissions/26252664
 * Submitted at: 2021-10-01 18:14:22
 * Problem URL: https://atcoder.jp/contests/abc046/tasks/abc046_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(3);
  cin>>v[0]>>v[1]>>v[2];
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  cout<<v.size()<<endl;
}