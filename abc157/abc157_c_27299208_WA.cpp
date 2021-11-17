/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc157/submissions/27299208
 * Submitted at: 2021-11-17 13:24:06
 * Problem URL: https://atcoder.jp/contests/abc157/tasks/abc157_c
 * Result: WA
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<int> v(n,-1);
  for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;a--;
    if((n!=1&&a==0&&b==0)||(v[a]!=-1&&v[a]!=b)){cout<<-1<<endl;return 0;}
    v[a]=b;
  }
  cout<<(v[0]==-1?1:v[0]);
  for(int i=1;i<n;i++)cout<<(v[i]==-1?0:v[i]);
  cout<<endl;
}