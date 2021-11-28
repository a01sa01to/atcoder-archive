/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc098/submissions/27580701
 * Submitted at: 2021-11-29 00:49:27
 * Problem URL: https://atcoder.jp/contests/arc098/tasks/arc098_a
 * Result: WA
 * Execution Time: 17 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;cin>>n>>s;
  int cnt=0;
  for(int i=1;i<n;++i)if(s[i]=='E')++cnt;
  vector<int>ans(n);
  for(int i=0;i<n;++i){
    ans[i]=cnt;
    if(s[i]=='W')++cnt;
    else --cnt;
  }
  cout<<*min_element(ans.begin(),ans.end())<<endl;
}