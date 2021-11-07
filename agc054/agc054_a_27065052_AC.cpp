/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc054/submissions/27065052
 * Submitted at: 2021-11-07 11:03:56
 * Problem URL: https://atcoder.jp/contests/agc054/tasks/agc054_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;cin>>n>>s;
  if(s[0] != s.back())cout<<1<<endl;
  else{
    bool chk=false;
    for(int i=0;i<n-2;i++)if(s[0]!=s[i]&&s[i+1]!=s.back())chk=true;
    cout<<(chk?2:-1)<<endl;
  }
}