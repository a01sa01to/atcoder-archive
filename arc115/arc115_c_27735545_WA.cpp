/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/27735545
 * Submitted at: 2021-12-06 17:09:20
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_c
 * Result: WA
 * Execution Time: 78 ms
 */

#include<bits/stdc++.h>
using namespace std;
int divisorCount(int x){
  int cnt=0;
  for(int i=1;i*i<=x;++i){
    if(x%i != 0)continue;
    ++cnt;
    if(i*i!=x)++cnt;
  }
  return cnt;
}
int main(){
  int n;cin>>n;
  vector<int>ans(n);
  for(int i=0;i<n;++i)ans[i]=divisorCount(i+1);
  for(int x:ans)cout<<x<<" ";
  cout<<endl;
}