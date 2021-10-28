/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/aising2020/submissions/26860885
 * Submitted at: 2021-10-28 23:25:59
 * Problem URL: https://atcoder.jp/contests/aising2020/tasks/aising2020_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,a,ans=0;cin>>n;
  for(int i=0;i<n;i++){cin>>a;if(~i%2&&a%2)ans++;}
  cout<<ans<<endl;
}