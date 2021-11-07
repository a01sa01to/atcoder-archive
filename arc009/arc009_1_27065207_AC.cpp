/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc009/submissions/27065207
 * Submitted at: 2021-11-07 11:17:42
 * Problem URL: https://atcoder.jp/contests/arc009/tasks/arc009_1
 * Result: AC
 * Execution Time: 5 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int ans=0;
  while(n--){
    int a,b;cin>>a>>b;
    ans+=a*b;
  }
  ans*=1.05;
  cout<<ans<<endl;
}