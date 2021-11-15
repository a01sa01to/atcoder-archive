/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc072/submissions/27274924
 * Submitted at: 2021-11-15 19:15:20
 * Problem URL: https://atcoder.jp/contests/abc072/tasks/arc082_a
 * Result: AC
 * Execution Time: 35 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> cnt(1e5,0);
  for(int i=0;i<n;i++){
    int a;cin>>a;cnt[a]++;
  }
  int ans=0;
  for(int i=0;i<1e5;i++){
    int tmp=cnt[i];
    if(i>0) tmp+=cnt[i-1];
    if(i<1e5-1) tmp+=cnt[i+1];
    ans=max(ans,tmp);
  }
  cout<<ans<<endl;
}