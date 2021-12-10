/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc033/submissions/27798512
 * Submitted at: 2021-12-10 23:53:20
 * Problem URL: https://atcoder.jp/contests/arc033/tasks/arc033_2
 * Result: AC
 * Execution Time: 151 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  set<int> s,t;
  for(int i=0;i<a;++i){int x;cin>>x;s.insert(x);}
  for(int i=0;i<b;++i){int x;cin>>x;if(s.count(x))t.insert(x);else s.insert(x);}
  cout<<fixed<<setprecision(10)<<(double)t.size()/(double)s.size()<<endl;
}