/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc181/submissions/26807828
 * Submitted at: 2021-10-25 10:37:51
 * Problem URL: https://atcoder.jp/contests/abc181/tasks/abc181_b
 * Result: AC
 * Execution Time: 45 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  long ans=0;
  while(n--){long a,b;cin>>a>>b;ans+=(b-a+1)*(a+b)/2;}
  cout<<ans<<endl;
}