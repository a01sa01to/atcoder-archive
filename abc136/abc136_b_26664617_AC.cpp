/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/26664617
 * Submitted at: 2021-10-18 12:56:00
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++){
    if(1<=i&&i<10) ans++;
    else if(100<=i&&i<1000) ans++;
    else if(10000<=i&&i<100000) ans++;
  }
  cout<<ans<<endl;
}