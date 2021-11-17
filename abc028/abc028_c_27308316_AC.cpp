/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/27308316
 * Submitted at: 2021-11-18 00:00:01
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  vector<int>ans;
  ans.push_back(a+b+c);
  ans.push_back(a+b+d);
  ans.push_back(a+b+e);
  ans.push_back(a+c+d);
  ans.push_back(a+c+e);
  ans.push_back(a+d+e);
  ans.push_back(b+c+d);
  ans.push_back(b+c+e);
  ans.push_back(b+d+e);
  ans.push_back(c+d+e);
  sort(ans.begin(),ans.end(),greater<int>());
  cout<<ans[2]<<endl;
}