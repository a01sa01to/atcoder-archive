/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc015/submissions/27623519
 * Submitted at: 2021-12-02 11:31:41
 * Problem URL: https://atcoder.jp/contests/agc015/tasks/agc015_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  long ans=0,u=0,d=0,n=s.size();
  for(int i=0;i<n;++i){
    if(s[i]=='U'){
      ans+=n-i-1;  // それ以上の階
      ans+=2*i;  // それ以下の階
    }
    else{
      ans+=i;  // それ以下
      ans+=2*(n-i-1);  // それ以上
    }
  }
  cout<<ans<<endl;
}