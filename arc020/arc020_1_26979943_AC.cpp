/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc020/submissions/26979943
 * Submitted at: 2021-11-02 00:34:14
 * Problem URL: https://atcoder.jp/contests/arc020/tasks/arc020_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  a=abs(a),b=abs(b);
  if(a<b) puts("Ant");
  else if(b<a) puts("Bug");
  else puts("Draw");
}