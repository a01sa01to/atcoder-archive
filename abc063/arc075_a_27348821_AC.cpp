/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc063/submissions/27348821
 * Submitted at: 2021-11-20 17:53:45
 * Problem URL: https://atcoder.jp/contests/abc063/tasks/arc075_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>s(n);for(int i=0;i<n;i++)cin>>s[i];
  sort(s.begin(),s.end());
  int sum=accumulate(s.begin(),s.end(),0);
  if(sum%10){cout<<sum<<endl;return 0;}
  for(int i=0;i<n;i++){
    if(s[i]%10){cout<<sum-s[i]<<endl;return 0;}
  }
  cout<<0<<endl;
}