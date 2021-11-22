/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc171/submissions/27440064
 * Submitted at: 2021-11-22 11:48:38
 * Problem URL: https://atcoder.jp/contests/abc171/tasks/abc171_c
 * Result: WA
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long long x;cin>>x;
  string ans="";
  while(x){
    ans.push_back((x-1)%26+'a');
    x/=26;
  }
  reverse(ans.begin(),ans.end());
  cout<<ans<<endl;
}