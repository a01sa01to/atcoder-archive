/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/26716205
 * Submitted at: 2021-10-21 18:13:23
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;cin>>n>>k;
  vector<bool> has(n,false);
  while(k--){
  	int d;
    cin>>d;
    int a;
    while(d--){cin>>a;has[--a]=true;}
  }
  int ans=0;
  for(int i=0;i<n;i++)if(!has[i])ans++;
  cout<<ans<<endl;
}