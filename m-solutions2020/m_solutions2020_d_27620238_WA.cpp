/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/m-solutions2020/submissions/27620238
 * Submitted at: 2021-12-02 00:31:35
 * Problem URL: https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_d
 * Result: WA
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;++i)cin>>v[i];
  
  // dp[i] = i日目終了時の所持金Max
  vector<int> dp(n+1,0);
  
  dp[0]=1000;
  for(int i=1;i<=n;++i){
    // なにもしない
    dp[i]=dp[i-1];
    for(int j=0;j<i;++j){
      // j日目に買ったものを売る
      int stock = dp[j]/v[j];
      int rem=dp[j]%v[j];
      dp[i]=max(dp[i], v[i-1]*stock+rem);
    }
  }
  cout<<dp[n]<<endl;
}