/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc047/submissions/27034440
 * Submitted at: 2021-11-05 14:34:18
 * Problem URL: https://atcoder.jp/contests/arc047/tasks/arc047_a
 * Result: AC
 * Execution Time: 12 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,l;cin>>n>>l;
  int ans=0,now=1;
  while(n--){char c;cin>>c;if(c=='+')now++;else now--;if(now>l){now=1;ans++;}}
  cout<<ans<<endl;
}