/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2021yo1a/submissions/32475882
 * Submitted at: 2022-06-15 00:11:31
 * Problem URL: https://atcoder.jp/contests/joi2021yo1a/tasks/joi2021_yo1a_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define t {a,b,c}
int main(){
  int a,b,c;cin>>a>>b>>c;
  cout<<a+b+c-max(t)-min(t)<<endl;
}