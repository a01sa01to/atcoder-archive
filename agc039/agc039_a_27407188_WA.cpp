/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/27407188
 * Submitted at: 2021-11-21 00:15:38
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;long long k,cnt1=0,cnt2=0,cnt3=0,ans;cin>>s>>k;s=s+s+s;
  for(int i=0;i<s.size();i++){
    if(k==1 && i==s.size()/3) break;
    if(k==2 && i==s.size()/3*2) break;
    if(s[i-1]==s[i]){
      if(i<s.size()/3)cnt1++;
      else if(i<s.size()/3*2)cnt2++;
      else cnt3++;
      s[i]='A';
    }
  }
  if(k==1)cout<<cnt1<<endl;
  else if(k==2)cout<<cnt1+cnt2<<endl;
  else cout<<cnt1+(k-2)*cnt2+cnt3<<endl;
}