/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc067/submissions/26253239
 * Submitted at: 2021-10-01 18:58:21
 * Problem URL: https://atcoder.jp/contests/abc067/tasks/abc067_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  if(a%3&&b%3&&(a+b)%3)cout<<"Impossible"<<endl;
  else cout<<"Possible"<<endl;
}