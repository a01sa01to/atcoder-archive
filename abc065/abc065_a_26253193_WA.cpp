/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc065/submissions/26253193
 * Submitted at: 2021-10-01 18:55:07
 * Problem URL: https://atcoder.jp/contests/abc065/tasks/abc065_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,a,b;
  cin>>x>>a>>b;
  if(a>=b) cout<<"delicious"<<endl;
  else if(b-a<x) cout<<"safe"<<endl;
  else cout<<"dangerous"<<endl;
}