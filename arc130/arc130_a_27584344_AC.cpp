/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc130/submissions/27584344
 * Submitted at: 2021-11-29 11:52:08
 * Problem URL: https://atcoder.jp/contests/arc130/tasks/arc130_a
 * Result: AC
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int n;string s;cin>>n>>s;
  ll ans=0,streak=0;
  for(int i=1;i<n;i++){
    if(s[i-1]==s[i])streak++;
    else streak=0;
    ans+=streak;
  }
  cout<<ans<<endl;
}