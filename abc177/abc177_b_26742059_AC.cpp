/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/26742059
 * Submitted at: 2021-10-23 12:10:33
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
  string s,t;cin>>s>>t;
  int ans=t.size();
  for(int b=0;b<=s.size()-t.size();b++){
    int d=0;
    for(int i=0;i<t.size();i++){
      if(t[i]!=s[b+i])d++;
    }
    ans=min(ans,d);
  }
  cout<<ans<<endl;
}
