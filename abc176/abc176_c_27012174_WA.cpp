/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/27012174
 * Submitted at: 2021-11-04 01:10:58
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_c
 * Result: WA
 * Execution Time: 68 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a=0,b,ans=0;
  while(n--){
    cin>>b;
    if(b<a)ans+=a-b;
    else a=max(a,b);
  }
  cout<<ans<<endl;
}