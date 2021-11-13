/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2014-final/submissions/27200470
 * Submitted at: 2021-11-13 11:45:52
 * Problem URL: https://atcoder.jp/contests/code-festival-2014-final/tasks/code_festival_final_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int ans=s[0]-'0';
  for(int i=1;i<s.size();i++){
	if(i&1)ans-=s[i]-'0';
    else ans+=s[i]-'0';
  }
  cout<<ans<<endl;
}