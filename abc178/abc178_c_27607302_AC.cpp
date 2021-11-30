/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/27607302
 * Submitted at: 2021-11-30 23:47:22
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
#include<atcoder/modint>
using namespace std;
using namespace atcoder;
typedef modint1000000007 mint;
int main(){
  int n;cin>>n;
  mint a=mint(10).pow(n);  // 全通り
  mint b=mint(9).pow(n);  // 0か9以外
  mint c=mint(8).pow(n);  // 0と9以外
  cout<<(a-2*b+c).val()<<endl;
}