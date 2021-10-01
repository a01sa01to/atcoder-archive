/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc047/submissions/26252688
 * Submitted at: 2021-10-01 18:15:53
 * Problem URL: https://atcoder.jp/contests/abc047/tasks/abc047_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b+c || b==a+c || c==a+b) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}