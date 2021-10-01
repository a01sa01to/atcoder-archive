/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc062/submissions/26253106
 * Submitted at: 2021-10-01 18:48:06
 * Problem URL: https://atcoder.jp/contests/abc062/tasks/abc062_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
int main(){
  dsu d(13);
  d.merge(1,3);d.merge(1,5);d.merge(1,7);d.merge(1,8);d.merge(1,10);d.merge(1,12);
  d.merge(4,6);d.merge(4,9);d.merge(4,11);
  int a,b;
  cin>>a>>b;
  cout<<(d.same(a,b)?"Yes":"No")<<endl;
}