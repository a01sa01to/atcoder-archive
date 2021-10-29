/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc025/submissions/26875296
 * Submitted at: 2021-10-30 00:09:09
 * Problem URL: https://atcoder.jp/contests/agc025/tasks/agc025_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string x;
  cin>>x;
  int ans=0;
  bool a=true;
  for(int i=0;i<x.size();i++){
    if(i==0&&x[i]!='1')a=false;
    if(i!=0&&x[i]!='0')a=false;
    ans+=x[i]-'0';
  }
  cout<<(a?10:ans)<<endl;
}