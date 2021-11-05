/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc026/submissions/27034580
 * Submitted at: 2021-11-05 14:49:16
 * Problem URL: https://atcoder.jp/contests/agc026/tasks/agc026_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int prev;cin>>prev;
  int ans=0;
  while(--n){int b;cin>>b;if(prev==b)ans++,b=1000;prev=b;}
  cout<<ans<<endl;
}