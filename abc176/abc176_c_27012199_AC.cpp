/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/27012199
 * Submitted at: 2021-11-04 01:12:44
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_c
 * Result: AC
 * Execution Time: 65 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  long a=0,b,ans=0;
  while(n--){
    cin>>b;
    if(b<a)ans+=a-b;
    else a=max(a,b);
  }
  cout<<ans<<endl;
}