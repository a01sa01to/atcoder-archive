/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc119/submissions/26979996
 * Submitted at: 2021-11-02 00:38:26
 * Problem URL: https://atcoder.jp/contests/arc119/tasks/arc119_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x,a=0,b=1,ans=1e18;
  cin>>x;
  for(;b<=x;b*=2,a++){
    ans = min(ans, a+x/b+x%b);
  }
  cout<<ans<<endl;
}