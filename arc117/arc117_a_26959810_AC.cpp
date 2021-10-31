/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc117/submissions/26959810
 * Submitted at: 2021-10-31 22:25:15
 * Problem URL: https://atcoder.jp/contests/arc117/tasks/arc117_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c=0;cin>>a>>b;
  bool ma=max(a,b)==a;
  for(int i=1;i<=max(a,b);i++){ cout<<(ma?i:-i)<<" "; c+=i; }
  for(int i=1;i<=min(a,b)-1;i++){ cout<<(ma?-i:i)<<" "; c-=i; }
  cout<<(ma?-c:c)<<endl;
}