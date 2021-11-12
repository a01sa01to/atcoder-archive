/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc113/submissions/27195643
 * Submitted at: 2021-11-12 23:38:43
 * Problem URL: https://atcoder.jp/contests/arc113/tasks/arc113_a
 * Result: AC
 * Execution Time: 21 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int k;cin>>k;
  long long ans=0;
  for(int a=1;a<=k;a++) for(int b=1;a*b<=k;b++){
    ans+=k/(a*b);
  }
  cout<<ans<<endl;
}