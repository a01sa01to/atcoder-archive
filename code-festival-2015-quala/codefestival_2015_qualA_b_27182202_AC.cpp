/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-quala/submissions/27182202
 * Submitted at: 2021-11-11 23:36:46
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-quala/tasks/codefestival_2015_qualA_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++){int a;cin>>a;ans+=a*(1<<(n-i));}
  cout<<ans<<endl;
}