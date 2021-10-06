/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc106/submissions/26387160
 * Submitted at: 2021-10-06 22:20:56
 * Problem URL: https://atcoder.jp/contests/abc106/tasks/abc106_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int s(int x){
  set<int> q;
  for(int i=1;i*i<=x;i++){if(x%i==0){q.insert(i); q.insert(x/i);}}
  return q.size();
}
int main(){
  int n,a=0;cin>>n;
  for(int x=1;x<=n;x+=2) if(s(x)==8) a++;
  cout<<a<<endl;
}