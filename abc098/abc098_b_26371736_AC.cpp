/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/26371736
 * Submitted at: 2021-10-05 22:57:55
 * Problem URL: https://atcoder.jp/contests/abc098/tasks/abc098_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int chk(string x,string y){
  set<char> _x,_y,res;
  for(int i=0;i<x.size();i++) _x.insert(x[i]);
  for(int i=0;i<y.size();i++) _y.insert(y[i]);
  set_intersection(_x.begin(),_x.end(),_y.begin(),_y.end(),inserter(res,res.end()));
  return res.size();
}
int main(){
  int n;cin>>n;
  string s;cin>>s;
  int a=0;
  for(int i=1;i<n;i++)a=max(a,chk(s.substr(0,i),s.substr(i,n-i)));
  cout<<a<<endl;
}
  