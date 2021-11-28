/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc098/submissions/27580744
 * Submitted at: 2021-11-29 00:53:33
 * Problem URL: https://atcoder.jp/contests/arc098/tasks/arc098_a
 * Result: AC
 * Execution Time: 17 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;cin>>n>>s;
  int cnt=0;
  for(int i=0;i<n;++i)if(s[i]=='E')++cnt;
  vector<int>ans(n);
  for(int i=0;i<n;++i){
    ans[i]=cnt-(s[i]=='E');
    if(s[i]=='W')++cnt;
    else --cnt;
  }
  cout<<*min_element(ans.begin(),ans.end())<<endl;
}